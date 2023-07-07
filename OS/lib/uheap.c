#include <inc/lib.h>

//==================================================================================//
//============================== GIVEN FUNCTIONS ===================================//
//==================================================================================//

int FirstTimeFlag = 1;
void InitializeUHeap()
{
	if(FirstTimeFlag)
	{
		initialize_dyn_block_system();
		cprintf("DYNAMIC BLOCK SYSTEM IS INITIALIZED\n");
#if UHP_USE_BUDDY
		initialize_buddy();
		cprintf("BUDDY SYSTEM IS INITIALIZED\n");
#endif
		FirstTimeFlag = 0;
	}
}

//==================================================================================//
//============================ REQUIRED FUNCTIONS ==================================//
//==================================================================================//

//=================================
// [1] INITIALIZE DYNAMIC ALLOCATOR:
//=================================
//#define remove_first_block_available(block, AvailableMemBlocksList) LIST_REMOVE(&AvailableMemBlocksList,block);
void initialize_dyn_block_system()
{
#if STATIC_MEMBLOCK_ALLOC
	//DO NOTHING
#else
	/*[2] Dynamically allocate the array of MemBlockNodes
	 * 	remember to:
	 * 		1. set MAX_MEM_BLOCK_CNT with the chosen size of the array
	 * 		2. allocation should be aligned on PAGE boundary
	 * 	HINT: can use alloc_chunk(...) function
	 */
			MAX_MEM_BLOCK_CNT = NUM_OF_UHEAP_PAGES;
			int size_of_kpage = ROUNDUP(sizeof(struct MemBlock)*MAX_MEM_BLOCK_CNT, PAGE_SIZE);
			int number_of_pages = size_of_kpage/PAGE_SIZE;
			int USER_HEAP_SIZE =  USER_HEAP_MAX-USER_HEAP_START;

			LIST_INIT(&AllocMemBlocksList);
			LIST_INIT(&FreeMemBlocksList);

			uint32 memory_size = MAX_MEM_BLOCK_CNT * sizeof(struct MemBlock);

				sys_allocate_chunk(USER_DYN_BLKS_ARRAY,size_of_kpage,PERM_WRITEABLE|PERM_USER);

			MemBlockNodes=(struct MemBlock*)USER_DYN_BLKS_ARRAY;
			initialize_MemBlocksList(MAX_MEM_BLOCK_CNT);
			//initialize_MemBlocksList(MAX_MEM_BLOCK_CNT);
			struct MemBlock *block;

			block = ((&AvailableMemBlocksList)->lh_first);
			//Get First Block of the  available block list


			LIST_REMOVE(&AvailableMemBlocksList,block);


			block->size= USER_HEAP_SIZE;
			block->sva=ROUNDDOWN(USER_HEAP_START,PAGE_SIZE);

			LIST_INSERT_HEAD(&FreeMemBlocksList,block);

#endif

}

//=================================
// [2] ALLOCATE SPACE IN USER HEAP:
//=================================

void* malloc(uint32 size)
{
	//==============================================================
	//DON'T CHANGE THIS CODE========================================
	InitializeUHeap();
	if (size == 0) return NULL ;
	//==============================================================
	//==============================================================

	//TODO: [PROJECT MS3] [USER HEAP - USER SIDE] malloc
	// your code is here, remove the panic and write your code
	//panic("malloc() is not implemented yet...!!");

			struct MemBlock *block = alloc_block_FF(ROUNDUP(size,PAGE_SIZE));

			if(block==NULL||size>USER_HEAP_MAX-USER_HEAP_START){
					return NULL;
			}
			else{insert_sorted_allocList(block);
			return ROUNDDOWN((void *)block->sva,PAGE_SIZE);
			}


	// Steps:
	//	1) Implement FF strategy to search the heap for suitable space
	//		to the required allocation size (space should be on 4 KB BOUNDARY)
	//	2) if no suitable space found, return NULL
	// 	3) Return pointer containing the virtual address of allocated space,
	//
	//Use sys_isUHeapPlacementStrategyFIRSTFIT()... to check the current strategy
}

//=================================
// [3] FREE SPACE FROM USER HEAP:
//=================================
// free():
//	This function frees the allocation of the given virtual_address
//	To do this, we need to switch to the kernel, free the pages AND "EMPTY" PAGE TABLES
//	FROM main memory AND free pages from page file then switch back to the user again.
//
//	We can use sys_free_user_mem(uint32 virtual_address, uint32 size); which
//		switches to the kernel mode, calls free_user_mem() in
//		"kern/mem/chunk_operations.c", then switch back to the user mode here
//	the free_user_mem function is empty, make sure to implement it.
void free(void* virtual_address)
{
	//TODO: [PROJECT MS3] [USER HEAP - USER SIDE] free
	//you should get the size of the given allocation using its address
	//you need to call sys_free_user_mem()
	//refer to the project presentation and documentation for details
	uint32 va = ROUNDDOWN((uint32)virtual_address,PAGE_SIZE);

//	struct FrameInfo* ptr_frame_info = NULL;
//	uint32* ptr_page_table = NULL;
	  struct MemBlock* block = find_block(&AllocMemBlocksList, (uint32)va);
	  if(block==NULL) {
		  return;
	  }
	  else if (block != NULL) {
		LIST_REMOVE(&AllocMemBlocksList,block);
		sys_free_user_mem(block->sva,block->size);
		insert_sorted_with_merge_freeList(block);
	  }
}

//=================================
// [4] ALLOCATE SHARED VARIABLE:
//=================================
void* sget(int32 ownerEnvID, char *sharedVarName)
{
	//==============================================================
	//DON'T CHANGE THIS CODE========================================
	InitializeUHeap();
	//==============================================================

	//TODO: [PROJECT MS3] [SHARING - USER SIDE] sget()
	// Write your code here, remove the panic and write your code
	//panic("sget() is not implemented yet...!!");

	// Steps:
	//	1) Get the size of the shared variable (use sys_getSizeOfSharedObject())
	int sharedVarSize = sys_getSizeOfSharedObject(ownerEnvID, sharedVarName);
	if (sharedVarSize == -16) {
		return NULL;
	}


	//	2) If not exists, return NULL
	//	3) Implement FIRST FIT strategy to search the heap for suitable space
	//		to share the variable (should be on 4 KB BOUNDARY)
	//	4) if no suitable space found, return NULL
	//	 Else,
	//	5) Call sys_getSharedObject(...) to invoke the Kernel for sharing this variable
	//		sys_getSharedObject(): if succeed, it returns the ID of the shared variable. Else, it returns -ve
	//	6) If the Kernel successfully share the variable, return its virtual address
	//	   Else, return NULL
	//
	uint32 roundedSize = ROUNDUP(sharedVarSize, PAGE_SIZE);
	if (sys_isUHeapPlacementStrategyFIRSTFIT()) {

		struct MemBlock* blk = alloc_block_FF(roundedSize);

		if (blk != NULL) {

			int chkID = sys_getSharedObject(ownerEnvID, sharedVarName,(void*)blk->sva);
			switch (chkID) {
				case -1:
					return (void *) NULL;
					break;
				default:
					return (void *) blk->sva;
					break;
			}

		}else{
			return (void *) NULL;
			}
	}

	return (void *) NULL;

	//This function should find the space for sharing the variable
	// * ON 4KB BOUNDARY **** //

	//Use sys_isUHeapPlacementStrategyFIRSTFIT() to check the current strategy
}
//========================================
// [5] SHARE ON ALLOCATED SHARED VARIABLE:
//========================================
#define return_null(size)({\
 if(size == 0){\
	 return NULL;\
 }\
})
//=================================
// [4] ALLOCATE SHARED VARIABLE:
//=================================
void* smalloc(char *sharedVarName, uint32 size, uint8 isWritable)
{
	InitializeUHeap();
	return_null(size) ;
	int currentValue[] = {sys_isUHeapPlacementStrategyFIRSTFIT()};
	if(currentValue[0]){

				struct MemBlock *block = alloc_block_FF(ROUNDUP(size,PAGE_SIZE));
				if(block==NULL){
						return (void*)NULL;
				}
				else{
					int id = sys_createSharedObject(sharedVarName,(ROUNDUP(size,PAGE_SIZE)),isWritable,(void *)block->sva);
					cprintf("print ID to check %d", id);
					if (id < 0){
						return (void*)NULL;
					}
					else{
						return (void *)block->sva;
					}
				}
				return (void *) NULL;
		}

		return (void *) NULL;
}
//==================================================================================//
//============================== BONUS FUNCTIONS ===================================//
//==================================================================================//


//=================================
// REALLOC USER SPACE:
//=================================
//	Attempts to resize the allocated space at "virtual_address" to "new_size" bytes,
//	possibly moving it in the heap.
//	If successful, returns the new virtual_address, in which case the old virtual_address must no longer be accessed.
//	On failure, returns a null pointer, and the old virtual_address remains valid.

//	A call with virtual_address = null is equivalent to malloc().
//	A call with new_size = zero is equivalent to free().

//  Hint: you may need to use the sys_move_user_mem(...)
//		which switches to the kernel mode, calls move_user_mem(...)
//		in "kern/mem/chunk_operations.c", then switch back to the user mode here
//	the move_user_mem() function is empty, make sure to implement it.
void *realloc(void *virtual_address, uint32 new_size)
{
	//==============================================================
	//DON'T CHANGE THIS CODE========================================
	InitializeUHeap();
	//==============================================================
	// [USER HEAP - USER SIDE] realloc
	// Write your code here, remove the panic and write your code
	panic("realloc() is not implemented yet...!!");
}


//=================================
// FREE SHARED VARIABLE:
//=================================
//	This function frees the shared variable at the given virtual_address
//	To do this, we need to switch to the kernel, free the pages AND "EMPTY" PAGE TABLES
//	from main memory then switch back to the user again.
//
//	use sys_freeSharedObject(...); which switches to the kernel mode,
//	calls freeSharedObject(...) in "shared_memory_manager.c", then switch back to the user mode here
//	the freeSharedObject() function is empty, make sure to implement it.

void sfree(void* virtual_address)
{
	//TODO: [PROJECT MS3 - BONUS] [SHARING - USER SIDE] sfree()

	// Write your code here, remove the panic and write your code
	panic("sfree() is not implemented yet...!!");
}




//==================================================================================//
//========================== MODIFICATION FUNCTIONS ================================//
//==================================================================================//
void expand(uint32 newSize)
{
	panic("Not Implemented");

}
void shrink(uint32 newSize)
{
	panic("Not Implemented");

}
void freeHeap(void* virtual_address)
{
	panic("Not Implemented");
}
