/*
 * paging_helpers.c
 *
 *  Created on: Sep 30, 2022
 *      Author: HP
 */
#include "memory_manager.h"

/*[2.1] PAGE TABLE ENTRIES MANIPULATION */
inline void pt_set_page_permissions(uint32* page_directory, uint32 virtual_address, uint32 permissions_to_set, uint32 permissions_to_clear)
{
	//TODO: [PROJECT MS2] [PAGING HELPERS] pt_set_page_permissions
	// Write your code here, remove the panic and write your code
	//panic("pt_set_page_permissions() is not implemented yet...!!");
	uint32 page_dir_index = PDX(virtual_address);
	uint32 page_table_index = PTX(virtual_address);
	uint32* ptr_page_table = NULL;
	uint32 page_table = get_page_table(page_directory, virtual_address, &ptr_page_table);
	if(page_table ==TABLE_IN_MEMORY)
	{
		ptr_page_table[page_table_index]=ptr_page_table[page_table_index]|permissions_to_set;
		ptr_page_table[page_table_index]=ptr_page_table[page_table_index]&(~permissions_to_clear);
		tlb_invalidate((void *)NULL, (void *)virtual_address);
	}
	else{
		panic("Invalid va");

	}


}

inline int pt_get_page_permissions(uint32* page_directory, uint32 virtual_address )
{
	//TODO: [PROJECT MS2] [PAGING HELPERS] pt_get_page_permissions
	// Write your code here, remove the panic and write your code
	//panic("pt_get_page_permissions() is not implemented yet...!!");
	uint32 page_dir_index = PDX(virtual_address);

		uint32* ptr_page_table = NULL;
		uint32 page_table = get_page_table(page_directory, virtual_address, &ptr_page_table);
		if(page_table ==TABLE_IN_MEMORY)
			{uint32 page_table_index = PTX(virtual_address);
			uint32 fram_num=ptr_page_table[page_table_index]>>12;
			fram_num=fram_num<<12;
			uint32 ans=ptr_page_table[page_table_index]-fram_num;
			return ans;

			}
			else{
				return -1;

			}

}

inline void pt_clear_page_table_entry(uint32* page_directory, uint32 virtual_address)
{
	//TODO: [PROJECT MS2] [PAGING HELPERS] pt_clear_page_table_entry
	// Write your code here, remove the panic and write your code
	//panic("pt_clear_page_table_entry() is not implemented yet...!!");
	uint32 page_dir_index = PDX(virtual_address);

			uint32* ptr_page_table = NULL;
			uint32 page_table = get_page_table(ptr_page_directory, virtual_address, &ptr_page_table);
			//uint32 dir_entry = ptr_page_directory[page_dir_index];
			//uint32 page_table_entry = ptr_page_table[page_table_index];
			//uint32 page_frame_number = dir_entry >> 12;
			//uint32 sva = page_frame_number * PAGE_SIZE;

		if (page_table == TABLE_IN_MEMORY)
		{
			//page_table_entry = 0;
			uint32 page_table_index = PTX(virtual_address);
			ptr_page_table[page_table_index] = 0;
			tlb_invalidate((void *)NULL, (void *)virtual_address);
		}
		else
		{
			//create_page_table(ptr_page_directory, virtual_address);
			panic("Invalid va");
		}


}

/***********************************************************************************************/

/*[2.2] ADDRESS CONVERTION*/
inline int virtual_to_physical(uint32* page_directory, uint32 virtual_address)
{
	//TODO: [PROJECT MS2] [PAGING HELPERS] virtual_to_physical
	// Write your code here, remove the panic and write your code
	//panic("virtual_to_physical() is not implemented yet...!!");
	uint32 page_dir_index = PDX(virtual_address);

			uint32* ptr_page_table = NULL;
			uint32 page_table = get_page_table(ptr_page_directory, virtual_address, &ptr_page_table);
			if(page_table ==TABLE_IN_MEMORY)
				{uint32 page_table_index = PTX(virtual_address);
				int physical_addres=ptr_page_table[page_table_index]>>12;
				physical_addres=physical_addres<<12;

				return physical_addres;

				}
				else{
					return -1;

				}

}

/***********************************************************************************************/

/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/

///============================================================================================
/// Dealing with page directory entry flags

inline uint32 pd_is_table_used(uint32* page_directory, uint32 virtual_address)
{
	return ( (page_directory[PDX(virtual_address)] & PERM_USED) == PERM_USED ? 1 : 0);
}

inline void pd_set_table_unused(uint32* page_directory, uint32 virtual_address)
{
	page_directory[PDX(virtual_address)] &= (~PERM_USED);
	tlb_invalidate((void *)NULL, (void *)virtual_address);
}

inline void pd_clear_page_dir_entry(uint32* page_directory, uint32 virtual_address)
{
	page_directory[PDX(virtual_address)] = 0 ;
	tlbflush();
}
