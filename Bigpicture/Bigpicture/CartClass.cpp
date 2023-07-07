#include "CartClass.h"
#include <sstream>
int cnttt = 0;

CartClass::CartClass()
{

}
void CartClass::Rating(Product p)
{
	
}


void CartClass::confirm()
{
	cart.clear();

}





void CartClass::remove_from_cart(Product p)
{
	bool f = 0;
	int x = p.quantity;
	
		for (int i = 0; i < cart.size(); i++)
		{

			if (cart[i].id == p.id)
			{
				if (0== cart[i].quantity) { break; }
				else {
					cart[i].quantity--;
					break;
				}
				break;
			}
			
	
		}
	
}




void CartClass::add_to_cart(Product p)
{
	int x = p.quantity;
	if (cart.size() == 0)
	{
		cart.push_back(p);
		cart[0].quantity = 1;
	}
	
	else {
		for (int i = 0; i < cart.size(); i++)
		{

			if (cart[i].id == p.id)
			{
				if (x == cart[i].quantity) { break; }
				cart[i].quantity++;
				break;
			}
			else if (i == cart.size() - 1) { cart.push_back(p); cart[i + 1].quantity = 1; break; }
		}
	}
	}
	







long long CartClass::final_price(vector<Product>k)
{
	string u;
	long long price_int = 0;
	
	
	int ans = 0;
	for (int i = 0; i < k.size(); i++)
	{
		int num_countity = k[i].quantity;
	    int num_price = stoi(k[i].price);
		 ans= num_countity* num_price;

			price_int += ans;

		
	}

	return price_int;

}
