/*
 * fault_handler.c
 *
 *  Created on: Oct 12, 2022
 *      Author: HP
 */

#include "trap.h"
#include <kern/proc/user_environment.h>
#include "../cpu/sched.h"
#include "../disk/pagefile_manager.h"
#include "../mem/memory_manager.h"
#define TRUE 2
extern int pf_add_empty_env_page( struct Env* ptr_env, uint32 virtual_address, uint8 initializeByZero);
//2014 Test Free(): Set it to bypass the PAGE FAULT on an instruction with this length and continue executing the next one
// 0 means don't bypass the PAGE FAULT
uint8 bypassInstrLength = 0;

//===============================
// REPLACEMENT STRATEGIES
//===============================
//2020
void setPageReplacmentAlgorithmLRU(int LRU_TYPE)
{
	assert(LRU_TYPE == PG_REP_LRU_TIME_APPROX || LRU_TYPE == PG_REP_LRU_LISTS_APPROX);
	_PageRepAlgoType = LRU_TYPE ;
}
void setPageReplacmentAlgorithmCLOCK(){_PageRepAlgoType = PG_REP_CLOCK;}
void setPageReplacmentAlgorithmFIFO(){_PageRepAlgoType = PG_REP_FIFO;}
void setPageReplacmentAlgorithmModifiedCLOCK(){_PageRepAlgoType = PG_REP_MODIFIEDCLOCK;}
/*2018*/ void setPageReplacmentAlgorithmDynamicLocal(){_PageRepAlgoType = PG_REP_DYNAMIC_LOCAL;}
/*2021*/ void setPageReplacmentAlgorithmNchanceCLOCK(int PageWSMaxSweeps){_PageRepAlgoType = PG_REP_NchanceCLOCK;  page_WS_max_sweeps = PageWSMaxSweeps;}

//2020
uint32 isPageReplacmentAlgorithmLRU(int LRU_TYPE){return _PageRepAlgoType == LRU_TYPE ? 1 : 0;}
uint32 isPageReplacmentAlgorithmCLOCK(){if(_PageRepAlgoType == PG_REP_CLOCK) return 1; return 0;}
uint32 isPageReplacmentAlgorithmFIFO(){if(_PageRepAlgoType == PG_REP_FIFO) return 1; return 0;}
uint32 isPageReplacmentAlgorithmModifiedCLOCK(){if(_PageRepAlgoType == PG_REP_MODIFIEDCLOCK) return 1; return 0;}
/*2018*/ uint32 isPageReplacmentAlgorithmDynamicLocal(){if(_PageRepAlgoType == PG_REP_DYNAMIC_LOCAL) return 1; return 0;}
/*2021*/ uint32 isPageReplacmentAlgorithmNchanceCLOCK(){if(_PageRepAlgoType == PG_REP_NchanceCLOCK) return 1; return 0;}

//===============================
// PAGE BUFFERING
//===============================
void enableModifiedBuffer(uint32 enableIt){_EnableModifiedBuffer = enableIt;}
uint8 isModifiedBufferEnabled(){  return _EnableModifiedBuffer ; }

void enableBuffering(uint32 enableIt){_EnableBuffering = enableIt;}
uint8 isBufferingEnabled(){  return _EnableBuffering ; }

void setModifiedBufferLength(uint32 length) { _ModifiedBufferLength = length;}
uint32 getModifiedBufferLength() { return _ModifiedBufferLength;}

//===============================
// FAULT HANDLERS
//===============================

//Handle the table fault
void table_fault_handler(struct Env * curenv, uint32 fault_va)
{
	//panic("table_fault_handler() is not implemented yet...!!");
	//Check if it's a stack page
	uint32* ptr_table;
#if USE_KHEAP
	{
		ptr_table = create_page_table(curenv->env_page_directory, (uint32)fault_va);
	}
#else
	{
		__static_cpt(curenv->env_page_directory, (uint32)fault_va, &ptr_table);
	}
#endif
}
#define remove_first_block_available(block, AvailableMemBlocksList) LIST_REMOVE(&AvailableMemBlocksList,block);
#define illegal_memory_acc(get_check,fault_va)          \
({                                                      \
    int  check = get_check;								\
    int answer=0;										\
    if (check == E_PAGE_NOT_EXIST_IN_PF && ! ((fault_va >= USER_HEAP_START && fault_va < USER_HEAP_MAX) || (fault_va >= USTACKBOTTOM && fault_va < USTACKTOP))) {                         \
        answer = 1;                                     \
    }													\
 answer;												\
})

# define get_page_size(curenv) env_page_ws_get_size(curenv);
int check_function_read_env(struct Env * curenv, uint32 fault_va ){
	int check_var = pf_read_env_page(curenv , (void*) fault_va);
	return check_var;
}
#define per_and_perm_chec(number,per)({\
		int val=0;							\
		if(number==1){								\
			val= per&PERM_MODIFIED;\
		}					\
	 if(number==2){\
		 val = per&PERM_USED;	 \
}		\
val;\
})

void page_fault_handler(struct Env * curenv, uint32 fault_va)
{


	uint32 the_capacity_of_the_page= get_page_size(curenv);
	uint32 *bointer = NULL;

	struct FrameInfo* ptr_info = get_frame_info(curenv->env_page_directory, fault_va, &bointer);


	 allocate_frame(&ptr_info);

	map_frame(curenv->env_page_directory,ptr_info,fault_va, PERM_WRITEABLE|PERM_PRESENT|PERM_USER);


	int flag = check_function_read_env(curenv, fault_va);

	//get page_ws_max_size to use it in the code
	uint32 maxS=curenv->page_WS_max_size;

	struct FrameInfo *ptr_fr_in = NULL;

	cprintf("page ws max size %d", maxS);

	if (illegal_memory_acc(flag, fault_va)==1){
			panic("ILLEGAL MEMORY ACCESS");
		}
	cprintf("page ws check %d", illegal_memory_acc(flag, fault_va));

	if(maxS > the_capacity_of_the_page)
	{

		for( uint32 i = 0; i < maxS; ++i) {
				if(curenv->ptr_pageWorkingSet[i].empty){
					env_page_ws_set_entry(curenv, i, fault_va);

					curenv->page_last_WS_index = ++i%maxS;
					break;
				}else{
					per_and_perm_chec(1,0);
					continue;
				}
			}



	}
	else{
		uint32 j=curenv->page_last_WS_index;
		uint32 get__per=pt_get_page_permissions(curenv->env_page_directory,curenv->ptr_pageWorkingSet[j].virtual_address);
		env_page_ws_print(curenv);
		for(;;)
		{
			get__per=pt_get_page_permissions(curenv->env_page_directory,curenv->ptr_pageWorkingSet[j].virtual_address);
			int number=2;
			if((per_and_perm_chec(number, get__per))!=0)
			{
				cprintf("number and perm PERM_USED %d", per_and_perm_chec(number, get__per));
				pt_set_page_permissions(curenv->env_page_directory,curenv->ptr_pageWorkingSet[j].virtual_address,0,PERM_USED);
			}
			else{
				int number=1;
				get__per= pt_get_page_permissions(curenv->env_page_directory,curenv->ptr_pageWorkingSet[j].virtual_address);
				cprintf("number and perm modified %d", per_and_perm_chec(number, get__per));
				if((per_and_perm_chec(number, get__per)) == PERM_MODIFIED)
							{	uint32 *prc = NULL;
								struct FrameInfo *ptr_frame_info = get_frame_info(curenv->env_page_directory,curenv->ptr_pageWorkingSet[j].virtual_address,&prc);
								// int ret
								pf_update_env_page(curenv, curenv->ptr_pageWorkingSet[j].virtual_address, ptr_frame_info);
							}

							unmap_frame(curenv->env_page_directory, curenv->ptr_pageWorkingSet[j].virtual_address);
							env_page_ws_set_entry(curenv,j,fault_va );
							curenv->page_last_WS_index=(j+1)%maxS;
							env_page_ws_print(curenv);
							break;


			}

			j=(j+1)%maxS;

		}


	}

}
void __page_fault_handler_with_buffering(struct Env * curenv, uint32 fault_va)
{
	// Write your code here, remove the panic and write your code
	//panic("__page_fault_handler_with_buffering() is not implemented yet...!!");


}
