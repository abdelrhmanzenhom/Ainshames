/*
 * chunk_operations.c
 *
 *  Created on: Oct 12, 2022
 *      Author: HP
 */

#include <kern/trap/fault_handler.h>
#include <kern/disk/pagefile_manager.h>
#include "kheap.h"
#include "memory_manager.h"


/******************************/
/*[1] RAM CHUNKS MANIPULATION */
/******************************/

//===============================
// 1) CUT-PASTE PAGES IN RAM:
//===============================
//This function should cut-paste the given number of pages from source_va to dest_va
//if the page table at any destination page in the range is not exist, it should create it
//Hint: use ROUNDDOWN/ROUNDUP macros to align the addresses
int cut_paste_pages(uint32* page_directory, uint32 source_va, uint32 dest_va, uint32 num_of_pages)
{
	//TODO: [PROJECT MS2] [CHUNK OPERATIONS] cut_paste_pages
	// Write your code here, remove the panic and write your code
	//panic("cut_paste_pages() is not implemented yet...!!");
	uint32 *ptr_page_table_source=NULL;

		uint32 real_source=ROUNDDOWN(source_va,PAGE_SIZE);

		uint32 real_destnation=ROUNDDOWN(dest_va,PAGE_SIZE);
		uint32 real_destnation2=real_destnation;
		//get_page_table(page_directory,start_source,&ptr_page_table_source);

		 uint32 *ptr_infoo=NULL;
		 uint32 *ptr_page_table_dest=NULL;
		//struct FrameInfo * ptr_frame_info =get_frame_info(page_directory, start_dest, &ptr_infoo);
		for(int i=0;i<num_of_pages;i++)
		{


			struct FrameInfo * ptr_frame_info =get_frame_info(page_directory, real_destnation, &ptr_infoo);
			if(ptr_frame_info!=NULL)return -1;

			real_destnation+=PAGE_SIZE;
		}


		for(int j=0;j<num_of_pages;j++)
		{
			if( get_page_table(page_directory,real_destnation2,&ptr_page_table_dest)!=TABLE_IN_MEMORY)
			{ptr_page_table_dest=create_page_table(page_directory,real_destnation2);}



	   struct FrameInfo *source = get_frame_info(page_directory,real_source,&ptr_page_table_source);

	   uint32 permm= pt_get_page_permissions(page_directory,real_source);
							   map_frame(page_directory,source , real_destnation2, permm);
							   unmap_frame(page_directory,real_source);
							   real_destnation2+=PAGE_SIZE;
							   real_source+=PAGE_SIZE;

		}

	return 0;

}

//===============================
// 2) COPY-PASTE RANGE IN RAM:
//===============================
//This function should copy-paste the given size from source_va to dest_va
//if the page table at any destination page in the range is not exist, it should create it
//Hint: use ROUNDDOWN/ROUNDUP macros to align the addresses
int copy_paste_chunk(uint32* page_directory, uint32 source_va, uint32 dest_va,uint32 size){
	//TODO: [PROJECT MS2] [CHUNK OPERATIONS] copy_paste_chunk
	// Write your code here, remove the panic and write your code
	//panic("copy_paste_chunk() is not implemented yet...!!");
	uint32 *ptr_page_table = NULL; //change name
	uint32 num_pages = ((ROUNDUP(source_va+size, PAGE_SIZE) - source_va)/PAGE_SIZE);//change here
	uint32 destentaion_address = dest_va;
	uint32 source_address = source_va;
	int i=0;
	do{
			struct FrameInfo* ptr_frame = get_frame_info(page_directory, destentaion_address, &ptr_page_table);
			if(ptr_frame != NULL){
				int getperm = pt_get_page_permissions(page_directory, destentaion_address);
				getperm = getperm & PERM_WRITEABLE;
				if(getperm == 0){
					return -1;
				}
			}
			destentaion_address+=PAGE_SIZE;
			i++;
	}
	while(i<num_pages);
	destentaion_address = dest_va;
	i =0;
	do{
		if (get_page_table(page_directory, destentaion_address, &ptr_page_table) == TABLE_NOT_EXIST) {
			create_page_table(page_directory, destentaion_address);
			uint32 perms2 = pt_get_page_permissions(page_directory, source_address);
			struct FrameInfo * ptr_frame_info; //carhere
			perms2 |= PERM_WRITEABLE;
			allocate_frame(&ptr_frame_info);
			map_frame(page_directory, ptr_frame_info, destentaion_address, perms2);
			destentaion_address+=PAGE_SIZE;
			source_address+=PAGE_SIZE;
		} else {

			uint32 *ptr_infoo = NULL;
			struct FrameInfo * ptr_frame_info = get_frame_info(page_directory, destentaion_address, &ptr_page_table);// sus
			if (ptr_frame_info == NULL) {
				uint32 perms2 = pt_get_page_permissions(page_directory, source_address);
				perms2 |= PERM_WRITEABLE;
				allocate_frame(&ptr_frame_info);
				map_frame(page_directory, ptr_frame_info, destentaion_address, perms2);
				destentaion_address+=PAGE_SIZE;
				source_address+=PAGE_SIZE;
			} else {
				destentaion_address+=PAGE_SIZE;
				source_address+=PAGE_SIZE;
				}
			}
		i++;
		}
	while(i < num_pages);
	uint64 *ptr_destn = (uint64*) dest_va;
	uint64 *ptr_source = (uint64*) source_va;
	i = 0;
	do{
		*ptr_destn = *ptr_source;
		ptr_destn++;
		ptr_source++;
		i++;
	}
	while(i < size/8);


		return 0;


}

//===============================
// 3) SHARE RANGE IN RAM:
//===============================
//This function should share the given size from dest_va with the source_va
//Hint: use ROUNDDOWN/ROUNDUP macros to align the addresses
int share_chunk(uint32* page_directory, uint32 source_va,uint32 dest_va, uint32 size, uint32 perms)
{
	//TODO: [PROJECT MS2] [CHUNK OPERATIONS] share_chunk
	// Write your code here, remove the panic and write your code
	//panic("share_chunk() is not implemented yet...!!");
	uint32 num_pages =ROUNDUP(size , PAGE_SIZE) / PAGE_SIZE;

			if(size%PAGE_SIZE!=0)num_pages++;

			uint32 *ptr_page_table = NULL;
			uint32 v_a=ROUNDDOWN(dest_va,PAGE_SIZE);

			//uint32 v_a_source=ROUNDDOWN(source_va,PAGE_SIZE);
			uint32 *ptr_page_table_source=NULL;
			//int source_page_table=get_page_table(page_directory,source_va,&ptr_page_table_source);

			  for (int i=0;i<num_pages;i++)
				     {if( get_page_table(page_directory, v_a, &ptr_page_table) == TABLE_NOT_EXIST)
						{
							ptr_page_table = create_page_table(page_directory, v_a);

						}
				    uint32 *ptr_infoo=NULL;
				 struct FrameInfo * ptr_frame_info =get_frame_info(page_directory, v_a, &ptr_infoo);
				    if(ptr_frame_info != NULL){
				     return -1;
				       	}

				   // allocate_frame(&ptr_frame_info);
				   // map_frame(page_directory, ptr_frame_info,v_a,perms);
		 struct FrameInfo *source = get_frame_info(page_directory,source_va , &ptr_page_table_source);

				   map_frame(page_directory,source , v_a, perms);

				  source_va+=PAGE_SIZE;
				    v_a=v_a+PAGE_SIZE;
				     }


			  return 0;

}

//===============================
// 4) ALLOCATE CHUNK IN RAM:
//===============================
//This function should allocate in RAM the given range [va, va+size)
//Hint: use ROUNDDOWN/ROUNDUP macros to align the addresses
int allocate_chunk(uint32* page_directory, uint32 va, uint32 size, uint32 perms)
{
	//TODO: [PROJECT MS2] [CHUNK OPERATIONS] allocate_chunk
	// Write your code here, remove the panic and write your code
	//panic("allocate_chunk() is not implemented yet...!!");
		uint32 num_pages

		=size/PAGE_SIZE ;

if(size%PAGE_SIZE!=0)num_pages+=2;

		uint32 *ptr_page_table = NULL;
		uint32 v_a=ROUNDDOWN(va,PAGE_SIZE);

		  for (int i=0;i<num_pages;i++)
			     {if( get_page_table(page_directory, v_a, &ptr_page_table) == TABLE_NOT_EXIST)
					{
						ptr_page_table = create_page_table(page_directory, v_a);

					}
			    uint32 *ptr_infoo=NULL;
			 struct FrameInfo * ptr_frame_info =get_frame_info(page_directory, v_a, &ptr_infoo);
			    if(ptr_frame_info != NULL){
			     return -1;
			       	}
		      allocate_frame(&ptr_frame_info);

		       map_frame(page_directory, ptr_frame_info,v_a,perms);
		       ptr_frame_info->va=v_a;

		      v_a=v_a+PAGE_SIZE;
			  }
		/*uint32 *ptr_page_table = NULL;
		struct FrameInfo * ptr_frame_info = get_frame_info(page_directory, va, &ptr_page_table);

		if(ptr_frame_info != NULL){
			return -1;
		}
		uint32 *ptr_page_table;
		size = ROUNDUP(size , PAGE_SIZE) ;

		if( get_page_table(ptr_page_directory, va, &ptr_page_table) == TABLE_NOT_EXIST)
		{
			ptr_page_table = create_page_table(ptr_page_directory, va);
			int res = allocate_frame()
		}
		*/
			return 0;

	}









/*BONUS*/
//=====================================
// 5) CALCULATE ALLOCATED SPACE IN RAM:
//=====================================
void calculate_allocated_space(uint32* page_directory, uint32 sva, uint32 eva, uint32 *num_tables, uint32 *num_pages)
{
	//TODO: [PROJECT MS2 - BONUS] [CHUNK OPERATIONS] calculate_allocated_space
	// Write your code here, remove the panic and write your code
	//panic("calculate_allocated_space() is not implemented yet...!!");
	uint32 *ptr_page_table = NULL;
	uint32 cnt1=0;
	num_pages=NULL;

	num_tables=NULL;
	 uint32 *ptr_infoo=NULL;
	uint32 cnt2=0;
	for(uint32 i=sva;i<=eva;i+=PAGE_SIZE)
	{if(get_page_table(page_directory,i,&ptr_page_table)==TABLE_IN_MEMORY){cnt1++;

	}

				 struct FrameInfo * ptr_frame_info =get_frame_info(page_directory,i, &ptr_infoo);
				    if(ptr_frame_info != NULL){
				    	cnt2++;
				       	}


	}
	   num_tables=&cnt1;
					    	num_pages=&cnt2;
	//*num_tables=cnt1;
	//*num_pages=cnt2;


}

/*BONUS*/
//=====================================
// 6) CALCULATE REQUIRED FRAMES IN RAM:
//=====================================
// calculate_required_frames:
// calculates the new allocation size required for given address+size,
// we are not interested in knowing if pages or tables actually exist in memory or the page file,
// we are interested in knowing whether they are allocated or not.
uint32 calculate_required_frames(uint32* page_directory, uint32 sva, uint32 size)
{
	//TODO: [PROJECT MS2 - BONUS] [CHUNK OPERATIONS] calculate_required_frames
	// Write your code here, remove the panic and write your code
	panic("calculate_required_frames() is not implemented yet...!!");
}

//=================================================================================//
//===========================END RAM CHUNKS MANIPULATION ==========================//
//=================================================================================//

/*******************************/
/*[2] USER CHUNKS MANIPULATION */
/*******************************/

//======================================================
/// functions used for USER HEAP (malloc, free, ...)
//======================================================

//=====================================
// 1) ALLOCATE USER MEMORY:
//=====================================
void allocate_user_mem(struct Env* e, uint32 virtual_address, uint32 size)
{
	// Write your code here, remove the panic and write your code
	panic("allocate_user_mem() is not implemented yet...!!");
}

//=====================================
// 2) FREE USER MEMORY:
//=====================================
void freeall(struct Env* f, uint32 va, uint32 s){

	for(uint32 x = va;x< va + s;x += PAGE_SIZE){
		pf_remove_env_page(f,x);
	}
}
void freeres(struct Env* f, uint32 va, uint32 s){
	for(uint32 x = va;x < va + s;x += PAGE_SIZE){
		int checker = 0;
		for(int checker = 0;checker < f->page_WS_max_size;checker++){
			if (env_page_ws_get_virtual_address(f , checker) == x)
			{
				unmap_frame(f->env_page_directory, env_page_ws_get_virtual_address(f , checker));
				env_page_ws_invalidate(f, env_page_ws_get_virtual_address(f , checker));
				f->page_last_WS_index = x;
			}
		}
	}

}
void removeemp(struct Env* f, uint32 va, uint32 s){

	for(uint32 x = va;x < va + s;x += PAGE_SIZE){
		int empty_flag = 1;
		int iterator = 0;
		uint32* AWRS=NULL;
		if(get_page_table(f->env_page_directory,x,&AWRS)== TABLE_IN_MEMORY){
			for(int iterator = 0;iterator < (PAGE_SIZE/4);iterator++){
				if(AWRS[iterator]!=0)
				{
					empty_flag = 0;
					break;
				}
			}
		}
			if(empty_flag == 1){
				pd_clear_page_dir_entry(f->env_page_directory,x);
				kfree((void *)(AWRS));
			}
		}
}
void free_user_mem(struct Env* e, uint32 virtual_address, uint32 size)
{
	//TODO: [PROJECT MS3] [USER HEAP - KERNEL SIDE] free_user_mem
	//This function should:
	//1. Free ALL pages of the given range from the Page File
	uint32 sub_virt = virtual_address;
	freeall(e,virtual_address,size);

	//2. Free ONLY pages that are resident in the working set from the memory
	freeres(e,virtual_address,size);

	//3. Removes ONLY the empty page tables (i.e. not used) (no pages are mapped in the table)
	removeemp(e,virtual_address,size);
}

//=====================================
// 2) FREE USER MEMORY (BUFFERING):
//=====================================
void __free_user_mem_with_buffering(struct Env* e, uint32 virtual_address, uint32 size)
{
	// your code is here, remove the panic and write your code
	panic("__free_user_mem_with_buffering() is not implemented yet...!!");

	//This function should:
	//1. Free ALL pages of the given range from the Page File
	//2. Free ONLY pages that are resident in the working set from the memory
	//3. Free any BUFFERED pages in the given range
	//4. Removes ONLY the empty page tables (i.e. not used) (no pages are mapped in the table)
}

//=====================================
// 3) MOVE USER MEMORY:
//=====================================
void move_user_mem(struct Env* e, uint32 src_virtual_address, uint32 dst_virtual_address, uint32 size)
{
	//TODO: [PROJECT MS3 - BONUS] [USER HEAP - KERNEL SIDE] move_user_mem
	//your code is here, remove the panic and write your code
	panic("move_user_mem() is not implemented yet...!!");

	// This function should move all pages from "src_virtual_address" to "dst_virtual_address"
	// with the given size
	// After finished, the src_virtual_address must no longer be accessed/exist in either page file
	// or main memory

	/**/
}

//=================================================================================//
//========================== END USER CHUNKS MANIPULATION =========================//
//=================================================================================//

