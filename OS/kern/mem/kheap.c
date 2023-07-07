#include "kheap.h"

#include <inc/memlayout.h>
#include <inc/dynamic_allocator.h>
#include "memory_manager.h"

//==================================================================//
//==================================================================//
//NOTE: All kernel heap allocations are multiples of PAGE_SIZE (4KB)//
//==================================================================//
//==================================================================//

int size_left(int total_memory_size){
	return ROUNDDOWN( KERNEL_HEAP_MAX - KERNEL_HEAP_START - total_memory_size,PAGE_SIZE);
}
#define remove_first_block_available(block, AvailableMemBlocksList) LIST_REMOVE(&AvailableMemBlocksList,block);
void initialize_dyn_block_system()
{
	//[1] Initialize two lists (AllocMemBlocksList & FreeMemBlocksList) [Hint: use LIST_INIT()]
#if STATIC_MEMBLOCK_ALLOC
	//DO NOTHING
#else
	/*[2] Dynamically allocate the array of MemBlockNodes
	 * 	remember to:
	 * 		1. set MAX_MEM_BLOCK_CNT with the chosen size of the array
	 * 		2. allocation should be aligned on PAGE boundary
	 * 	HINT: can use alloc_chunk(...) function
	 */
			MAX_MEM_BLOCK_CNT = NUM_OF_KHEAP_PAGES;
			int size_of_kpage = ROUNDUP(sizeof(struct MemBlock)*MAX_MEM_BLOCK_CNT, PAGE_SIZE);
			int number_of_pages = size_of_kpage/PAGE_SIZE;
			int KERNEL_HEAP_SIZE = KERNEL_HEAP_MAX-KERNEL_HEAP_START;
			LIST_INIT(&AllocMemBlocksList);
			LIST_INIT(&FreeMemBlocksList);

			uint32 memory_size = MAX_MEM_BLOCK_CNT * sizeof(struct MemBlock);
			for(int i=0; i<number_of_pages; i++){
				allocate_chunk(ptr_page_directory,KERNEL_HEAP_START,size_of_kpage,PERM_WRITEABLE);
			}
			MemBlockNodes=(struct MemBlock*)KERNEL_HEAP_START;
			initialize_MemBlocksList(MAX_MEM_BLOCK_CNT);
			struct MemBlock *block;
			initialize_MemBlocksList(MAX_MEM_BLOCK_CNT);
			block = ((&AvailableMemBlocksList)->lh_first);
			//Get First Block of the  available block list
			remove_first_block_available(block, AvailableMemBlocksList);
			block->size=size_left(memory_size);
			block->sva=ROUNDDOWN(KERNEL_HEAP_START + ROUNDUP(memory_size,PAGE_SIZE),PAGE_SIZE );

			LIST_INSERT_HEAD(&FreeMemBlocksList,block);

#endif

}

void* firstFitBestFitCheck(unsigned int val,struct MemBlock *block, unsigned int res){
	uint32 rounded=ROUNDDOWN(block->sva,PAGE_SIZE);
		insert_sorted_allocList(block);
		if(val==0){
			allocate_chunk(ptr_page_directory,rounded,res,PERM_WRITEABLE);
		}
		if(val==1){
			allocate_chunk(ptr_page_directory,ROUNDDOWN(rounded,PAGE_SIZE),res,PERM_WRITEABLE );
		}
		return (void *)ROUNDDOWN(rounded,PAGE_SIZE);
}
void* kmalloc(unsigned int size)
{
	uint32 s= ROUNDUP(size,PAGE_SIZE);
	//first index refers to FF and the second refers to BF
	int currentValue[] = {isKHeapPlacementStrategyFIRSTFIT(), isKHeapPlacementStrategyBESTFIT()};
	if(currentValue[0]){
		struct MemBlock *block = alloc_block_FF(s);
		if(size>KERNEL_HEAP_MAX-KERNEL_HEAP_START){
				return NULL;
		}
		if(block == NULL){
			return NULL;
		}
		return firstFitBestFitCheck(0,block,s);
	}
	if(currentValue[1]){
		struct MemBlock *block = alloc_block_BF(s);
		if(block == NULL){
				return NULL;
			}
		return firstFitBestFitCheck(1,block,s);

	}
	return NULL;
}

void kfree(void* virtual_address)
{

		uint32 va = ROUNDDOWN((uint32)virtual_address,PAGE_SIZE);

		struct FrameInfo* ptr_frame_info = NULL;
		uint32* ptr_page_table = NULL;
		  struct  MemBlock *block = find_block(&AllocMemBlocksList, (uint32)virtual_address);
		  if(block==NULL){
			  return;
		  }
		  LIST_REMOVE(&AllocMemBlocksList,block);
		  for (uint32 i = 0; i <block->size; ++i) {
			  ptr_frame_info = get_frame_info(ptr_page_directory,va+i,&ptr_page_table);
			unmap_frame(ptr_page_directory,va+i);
		}
		insert_sorted_with_merge_freeList(block);
}


unsigned int kheap_virtual_address(unsigned int physical_address)
{


struct FrameInfo * ptr = to_frame_info(physical_address);

return ptr->va;



return 0;


}

unsigned int kheap_physical_address(unsigned int virtual_address)
{
	uint32 page_dir_index = PDX(virtual_address);
	uint32* ptr_page_table = NULL;
	uint32 page_table = get_page_table(ptr_page_directory, virtual_address, &ptr_page_table);

	if(page_table ==TABLE_IN_MEMORY)
	{
		uint32 page_table_index = PTX(virtual_address);
		int physical_addres=ptr_page_table[page_table_index]>>12;
		physical_addres=physical_addres<<12;
		return physical_addres;
	}
	else{
		return -1;
	}
}


void kfreeall()
{
	panic("Not implemented!");

}

void kshrink(uint32 newSize)
{
	panic("Not implemented!");
}

void kexpand(uint32 newSize)
{
	panic("Not implemented!");
}




//=================================================================================//
//============================== BONUS FUNCTION ===================================//
//=================================================================================//
// krealloc():

//	Attempts to resize the allocated space at "virtual_address" to "new_size" bytes,
//	possibly moving it in the heap.
//	If successful, returns the new virtual_address, in which case the old virtual_address must no longer be accessed.
//	On failure, returns a null pointer, and the old virtual_address remains valid.

//	A call with virtual_address = null is equivalent to kmalloc().
//	A call with new_size = zero is equivalent to kfree().

void *krealloc(void *virtual_address, uint32 new_size)
{
	//TODO: [PROJECT MS2 - BONUS] [KERNEL HEAP] krealloc
	// Write your code here, remove the panic and write your code
	panic("krealloc() is not implemented yet...!!");
}
