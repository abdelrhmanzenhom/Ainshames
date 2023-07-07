#pragma once
#include <iostream>
using namespace std;
class Product
{


public:
    int id;
    
    string namee;
    string price;
    int person;
    float rate;
    float final_rate;
    int quantity;
    int seller_id;
    string pic;
    

    Product();
    
    void adde(System::String^ s1, System::String^ s2, int s3,System::String^ s5,int flag);
    int product_id(int flag2);
    
};

