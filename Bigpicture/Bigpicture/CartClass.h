#pragma once
#include "Product.h"
#include <vector>
class CartClass
{public:
		vector<Product>cart;

		int full_price;
		

	CartClass();
	void confirm();
	void Rating(Product f);
	void add_to_cart(Product p);
	void remove_from_cart(Product x);
	long long final_price(vector<Product>p);
	
};

