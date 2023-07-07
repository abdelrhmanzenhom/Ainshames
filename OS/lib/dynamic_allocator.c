/*
 * dyn_block_management.c
 *
 *  Created on: Sep 21, 2022
 *      Author: HP
 */
#include <inc/assert.h>
#include <inc/string.h>
#include "../inc/dynamic_allocator.h"


//==================================================================================//
//============================== GIVEN FUNCTIONS ===================================//
//==================================================================================//

//===========================
// PRINT MEM BLOCK LISTS:
//===========================

void print_mem_block_lists()
{
	cprintf("\n=========================================\n");
	struct MemBlock* blk ;
	struct MemBlock* lastBlk = NULL ;
	cprintf("\nFreeMemBlocksList:\n");
	uint8 sorted = 1 ;
	LIST_FOREACH(blk, &FreeMemBlocksList)
	{
		if (lastBlk && blk->sva < lastBlk->sva + lastBlk->size)
			sorted = 0 ;
		cprintf("[%x, %x)-->", blk->sva, blk->sva + blk->size) ;
		lastBlk = blk;
	}
	if (!sorted)	cprintf("\nFreeMemBlocksList is NOT SORTED!!\n") ;

	lastBlk = NULL ;
	cprintf("\nAllocMemBlocksList:\n");
	sorted = 1 ;
	LIST_FOREACH(blk, &AllocMemBlocksList)
	{
		if (lastBlk && blk->sva < lastBlk->sva + lastBlk->size)
			sorted = 0 ;
		cprintf("[%x, %x)-->", blk->sva, blk->sva + blk->size) ;
		lastBlk = blk;
	}
	if (!sorted)	cprintf("\nAllocMemBlocksList is NOT SORTED!!\n") ;
	cprintf("\n=========================================\n");

}

//********************************************************************************//
//********************************************************************************//

//==================================================================================//
//============================ REQUIRED FUNCTIONS ==================================//
//==================================================================================//

//===============================
// [1] INITIALIZE AVAILABLE LIST:
//===============================
void initialize_MemBlocksList(uint32 numOfBlocks)
{
	//TODO: [PROJECT MS1] [DYNAMIC ALLOCATOR] initialize_MemBlocksList
		// Write your code here, remove the panic and write your code
		LIST_INIT(&AvailableMemBlocksList);
		for(int i=0;i<numOfBlocks;i++){
			MemBlockNodes[i].sva=i;
			MemBlockNodes[i].size=20;
		}

		for(int i=0;i<numOfBlocks;i++){
			LIST_INSERT_HEAD(&AvailableMemBlocksList,&MemBlockNodes[i]);

		}

		//panic("initialize_MemBlocksList() is not implemented yet...!!");

}

//===============================
// [2] FIND BLOCK:
//===============================
struct MemBlock *find_block(struct MemBlock_List *blockList, uint32 va)
{
	//TODO: [PROJECT MS1] [DYNAMIC ALLOCATOR] find_block
	// Write your code here, remove the panic and write your code
	 struct MemBlock* vaa;
	    LIST_FOREACH(vaa,blockList){
	        if(vaa->sva == va){
	            return vaa;
	        }

	    }
	    return NULL;
}

//=========================================
// [3] INSERT BLOCK IN ALLOC LIST [SORTED]:
//=========================================
void insert_sorted_allocList(struct MemBlock *blockToInsert)
{
	//TODO: [PROJECT MS1] [DYNAMIC ALLOCATOR] insert_sorted_allocList
	// Write your code here, remove the panic and write your code
	struct MemBlock *itret;
	//int size = LIST_SIZE(&AllocMemBlocksList);
	int f=0;
	//struct MemBlock* element = LIST_FIRST(&AllocMemBlocksList);
int cnt=0;

	LIST_FOREACH(itret,&AllocMemBlocksList){
		if(itret==NULL){LIST_INSERT_HEAD(&AllocMemBlocksList, blockToInsert);cnt=1;break;}
		else if(itret->sva>blockToInsert->sva||itret->sva==blockToInsert->sva)
		{
		LIST_INSERT_BEFORE(&AllocMemBlocksList,itret,blockToInsert);
		cnt=1;
		break;

		}

f++;
	}
	if(cnt==0){LIST_INSERT_TAIL(&AllocMemBlocksList,blockToInsert);}

}

//=========================================
// [4] ALLOCATE BLOCK BY FIRST FIT:
//=========================================
struct MemBlock *alloc_block_FF(uint32 size)
{
	//TODO: [PROJECT MS1] [DYNAMIC ALLOCATOR] alloc_block_FF
	// Write your code here, remove the panic and write your code
	struct MemBlock *ptr;
	int f=0;
	LIST_FOREACH(ptr,&FreeMemBlocksList){
		if(ptr->size==size)
		{
		//LIST_INSERT_TAIL(&AllocMemBlocksList,var);
			LIST_REMOVE(&FreeMemBlocksList,ptr);
			return ptr;
		}
		else if(ptr->size>size)
		{

		//LIST_INSERT_TAIL(&AvailableMemBlocksList,ptr);
			//LIST_REMOVE(&FreeMemBlocksList,ptr);
			struct MemBlock *var = LIST_FIRST(&AvailableMemBlocksList);
			 LIST_REMOVE(&AvailableMemBlocksList,var);
			struct MemBlock *ans;
			var->size=size;
			var->sva=ptr->sva;
			ans=var;
			ptr->size=ptr->size-size;
			ptr->sva=ptr->sva+size;
			//LIST_INSERT_TAIL(&AllocMemBlocksList,ans);

			return ans;
		}

	}

	return NULL;

}

//=========================================
// [5] ALLOCATE BLOCK BY BEST FIT:
//=========================================
struct MemBlock *alloc_block_BF(uint32 size)
{
	//TODO: [PROJECT MS1] [DYNAMIC ALLOCATOR] alloc_block_BF
	// Write your code here, remove the panic and write your code
	struct MemBlock *ptr;

	struct MemBlock *ans;


		int f=0;
		LIST_FOREACH(ptr,&FreeMemBlocksList){
			if(ptr->size==size)
			{
			//LIST_INSERT_TAIL(&AllocMemBlocksList,var);
				LIST_REMOVE(&FreeMemBlocksList,ptr);
				return ptr;
			}
			else if(ptr->size>size)
			{
				if(f==0){
				ans=ptr;
				}


				else if(ans->size>ptr->size){

				ans=ptr;

				}
				f=1;
			}
		}
		if(f==1){struct MemBlock *var = LIST_FIRST(&AvailableMemBlocksList);
		 LIST_REMOVE(&AvailableMemBlocksList,var);
		//struct MemBlock *real_ans=&ans;

		ans->size=ans->size-size;
		var->sva=ans->sva;
		ans->sva=ans->sva+size;

		var->size=size;


		return var;
		}

		return NULL;

}


//=========================================
// [7] ALLOCATE BLOCK BY NEXT FIT:
//=========================================
struct MemBlock *ptr;
struct MemBlock *alloc_block_NF(uint32 size)
{
	//TODO: [PROJECT MS1 - BONUS] [DYNAMIC ALLOCATOR] alloc_block_NF
	// Write your code here, remove the panic and write your code

cprintf("the wanted size= %x",size);

	print_mem_block_lists();
	struct MemBlock *ans;
int f=0;
LIST_FOREACH(ptr,&FreeMemBlocksList){
	if(ptr->size==size)
				{
				//LIST_INSERT_TAIL(&AllocMemBlocksList,var);
					LIST_REMOVE(&FreeMemBlocksList,ptr);
					cprintf("found the equal int the first[%x, %x)",ptr->sva,ptr->size);
					print_mem_block_lists();
					return ptr;
				}
				else if(ptr->size>size)
				{
					struct MemBlock *var = LIST_FIRST(&AvailableMemBlocksList);
								 LIST_REMOVE(&AvailableMemBlocksList,var);
								struct MemBlock *ans;
								var->size=size;
								var->sva=ptr->sva;
								ans=var;
								ptr->size=ptr->size-size;
								ptr->sva=ptr->sva+size;
								//LIST_INSERT_TAIL(&AllocMemBlocksList,ans);
					cprintf("found the equal int the first1[%x, %x)",var->sva,var->size);
					print_mem_block_lists();
					return ans;
				}
			}
ptr=LIST_FIRST(&FreeMemBlocksList);
f=0;
LIST_FOREACH(ptr,&FreeMemBlocksList){
		if(ptr->size==size)
		{
		//LIST_INSERT_TAIL(&AllocMemBlocksList,var);
			LIST_REMOVE(&FreeMemBlocksList,ptr);
			cprintf("found the equal int the second[%x, %x)",ptr->sva,ptr->size);
			print_mem_block_lists();
			return ptr;
		}
		else if(ptr->size>size)
		{
			struct MemBlock *var = LIST_FIRST(&AvailableMemBlocksList);
						 LIST_REMOVE(&AvailableMemBlocksList,var);
						struct MemBlock *ans;
						var->size=size;
						var->sva=ptr->sva;
						ans=var;
						ptr->size=ptr->size-size;
						ptr->sva=ptr->sva+size;
						//LIST_INSERT_TAIL(&AllocMemBlocksList,ans);
						cprintf("found the equal int the second2[%x, %x)",ptr->sva,ptr->size);
						print_mem_block_lists();
						return ans;
		}
	}

	cprintf("didnot find it");
	print_mem_block_lists();

		return NULL;



}

//===================================================
// [8] INSERT BLOCK (SORTED WITH MERGE) IN FREE LIST:
//===================================================
void insert_sorted_with_merge_freeList(struct MemBlock *blockToInsert)
{
	cprintf("BEFORE INSERT with MERGE: insert [%x, %x)\n=====================\n", blockToInsert->sva, blockToInsert->sva + blockToInsert->size);
	print_mem_block_lists() ;

	struct MemBlock *itrat;
	int size=LIST_SIZE(&FreeMemBlocksList);
	struct MemBlock *last=LIST_LAST(&FreeMemBlocksList);
	struct MemBlock *first=LIST_FIRST(&FreeMemBlocksList);

	if(size==0){
	LIST_INSERT_HEAD(&FreeMemBlocksList, blockToInsert);//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
	//print_mem_block_lists();
	return;}

	if(last->sva<blockToInsert->sva){

		if(blockToInsert->sva==last->sva+last->size)
		{struct MemBlock *ans =blockToInsert ;
			ans->size=blockToInsert->size+last->size;
		    ans->sva=last->sva;
		    struct MemBlock *var=last;
		    LIST_REMOVE(&FreeMemBlocksList,last);
		    var->size=0;
		    var->sva=0;
		    LIST_INSERT_TAIL(&AvailableMemBlocksList,var);
			LIST_INSERT_TAIL(&FreeMemBlocksList,ans);


		}
		else{
		LIST_INSERT_TAIL(&FreeMemBlocksList,blockToInsert);}

	//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
		//print_mem_block_lists();
		return;}

	if(first->sva>blockToInsert->sva)
	{if(blockToInsert->sva+blockToInsert->size==first->sva)

	{struct MemBlock *anss=blockToInsert;

	anss->size=blockToInsert->size+first->size;
	anss->sva=blockToInsert->sva;
	struct MemBlock *var=first;
		LIST_INSERT_HEAD(&FreeMemBlocksList,anss);
		LIST_REMOVE(&FreeMemBlocksList,first);
		            var->size=0;
				    var->sva=0;
				    LIST_INSERT_TAIL(&AvailableMemBlocksList,var);
				   // cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
				    		//print_mem_block_lists();
				    return;

	}
	else{

		LIST_INSERT_HEAD(&FreeMemBlocksList,blockToInsert);
		//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
				//print_mem_block_lists();
				return;

	}


		//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
				//print_mem_block_lists();
	return;
	}

	struct MemBlock *prev;
int cnt=0;
	LIST_FOREACH(itrat,&FreeMemBlocksList)
	{if(cnt==0){cnt++;continue;}
	prev=LIST_PREV(itrat);
	int nex=itrat->sva;

    int previous=prev->sva+prev->size;

    int self= blockToInsert->sva+blockToInsert->size;

		if(itrat->sva>blockToInsert->sva)
				{
			if(blockToInsert->sva!=previous&&self!=nex)
			{LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,blockToInsert);

			}
			else if(previous==blockToInsert->sva&&self!=nex)
			{

				struct MemBlock *ans=blockToInsert;
				int size=prev->size;
						ans->sva=prev->sva;
						ans->size=size+blockToInsert->size;
						struct MemBlock *var=prev;
						LIST_REMOVE(&FreeMemBlocksList,prev);
						LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,ans);
						 var->size=0;
					      var->sva=0;
						  LIST_INSERT_TAIL(&AvailableMemBlocksList,var);




			}
			else if(previous!=blockToInsert->sva&&self==nex)
			{


				struct MemBlock *ans2=blockToInsert;
				int size=itrat->size;
				ans2->sva=blockToInsert->sva;
				ans2->size=size+blockToInsert->size;
				struct MemBlock *var=itrat;
				struct MemBlock help;
				help.size=var->size;
				help.sva=var->sva;
				struct MemBlock *heeeelp=&help;

				LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,ans2);
				LIST_REMOVE(&FreeMemBlocksList,itrat);
					var->size=0;
				  var->sva=0;
	          LIST_INSERT_TAIL(&AvailableMemBlocksList,var);



			}
			else if(previous==blockToInsert->sva&&self==nex)
			{
				struct MemBlock *ans2=blockToInsert;
				int size=itrat->size+prev->size;
				ans2->sva=prev->sva;
				ans2->size=size+blockToInsert->size;
				struct MemBlock *var=itrat;
				struct MemBlock *var2=prev;

				LIST_REMOVE(&FreeMemBlocksList,prev);
				LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,ans2);
				LIST_REMOVE(&FreeMemBlocksList,itrat);
					var->size=0;

					var->sva=0;
			    LIST_INSERT_TAIL(&AvailableMemBlocksList,var);
			    var2->sva=0;
			    					var2->size=0;
			    LIST_INSERT_TAIL(&AvailableMemBlocksList,var2);


			}

break;}


	}













		/** if(itrat->sva > blockToInsert->sva)
	{
		prev=LIST_PREV(itrat);
		int nex=itrat->sva;

	int prevv=prev->sva+prev->size;

	int self=blockToInsert->sva+blockToInsert->size;

		if(blockToInsert->sva!=prevv&&self!=nex)
						{LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,blockToInsert);
						cprintf("BEFORE INSERT with MERGEhhhhhhhhhh: insert [%x, %x)\n=====================\n", blockToInsert->sva, blockToInsert->sva + blockToInsert->size);
											print_mem_block_lists() ;return;


}
		else if(prevv==blockToInsert->sva&&self!=nex){
			//cprintf("BEFORE INSERT with MERGE: insert [%x, %x)\n=====================\n", blockToInsert->sva, blockToInsert->sva + blockToInsert->size);
					//print_mem_block_lists() ;
			struct MemBlock ans;
		ans.sva=prev->sva;
		ans.size=prev->size+blockToInsert->size;
		struct MemBlock *real_ans;
		real_ans=&ans;
		LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,real_ans);
		//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
			//print_mem_block_lists();

		}
		else if(prevv!=blockToInsert->sva&&self==nex){
			//cprintf("BEFORE INSERT with MERGE: insert [%x, %x)\n=====================\n", blockToInsert->sva, blockToInsert->sva + blockToInsert->size);
					//print_mem_block_lists() ;
			struct MemBlock ans;

			ans.sva=blockToInsert->sva;

					ans.size=itrat->size+blockToInsert->size;

					struct MemBlock *real_ans1;
					real_ans1=&ans;
					LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,real_ans1);
					//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
						//print_mem_block_lists();



		}
		else if(prevv==blockToInsert->sva&&self==nex){
			//cprintf("BEFORE INSERT with MERGE: insert [%x, %x)\n=====================\n", blockToInsert->sva, blockToInsert->sva + blockToInsert->size);
					//print_mem_block_lists() ;
			struct MemBlock ans;
			ans.sva=prev->sva;
					ans.size=prev->size+blockToInsert->size+itrat->size;
					struct MemBlock *real_ans2;
					real_ans2=&ans;
					LIST_INSERT_BEFORE(&FreeMemBlocksList,itrat,real_ans2);
					//cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
						//print_mem_block_lists();
		}
	}


	}
	//if(f==0)
	//{
		//LIST_INSERT_TAIL(&FreeMemBlocksList,blockToInsert);
	//}


//return;
	//TODO: [PROJECT MS1] [DYNAMIC ALLOCATOR] insert_sorted_with_merge_freeList
	// Write your code here, remove the panic and write your code
	//panic("insert_sorted_with_merge_freeList() is not implemented yet...!!");


**/
	cprintf("\nAFTER INSERT with MERGE:\n=====================\n");
		print_mem_block_lists();
	// cprintf("\nAFTER INSERT with MERGEfffffff:\n=====================\n");
		            						//print_mem_block_lists();

}

