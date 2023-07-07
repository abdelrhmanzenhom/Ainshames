#include "Product.h"
#include <iostream>
#include<string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <map>
using namespace std;

Product::Product()
{
}
void Product::adde(System::String^ s1, System::String^ s2, int s3, System::String^ s5,int flag)
{
    
    
    std::string namee= msclr::interop::marshal_as<std::string>(s1);
    std::string price= msclr::interop::marshal_as<std::string>(s2);
    int  quantity = s3;
    std::string pic = msclr::interop::marshal_as<std::string>(s5);
    this->price = price;
    this->namee = namee;
    
    this->quantity = quantity;
 
    int Product_id = product_id(flag);
    switch (flag)
    {
    case 1: {ofstream electr("electro", ios::app);
        electr  << this->namee << " " << this->price << " " << this->quantity << " " << pic <<" "<<Product_id << endl;
       
        break; }
    case 2:
    { ofstream food("food", ios::app);
        food <<  this->namee << " " << this->price << " " << this->quantity << " " << pic <<" " << product_id(flag) << endl;
    break;
    }
    case 3: {ofstream kitchen("kitchen", ios::app);
        kitchen <<  this->namee<< " " << this->price << " " << this->quantity << " " << pic  <<" " << product_id(flag)<< endl;
        break; }
    case 4: {ofstream sports("sports", ios::app);
        sports <<this->namee << " " << this->price << " " << this->quantity << " " << pic << " " << product_id(flag) << endl;
        break; }
    case 5: {ofstream clothes("clothes", ios::app);
        clothes <<  this->namee << " " << this->price << " " << this->quantity << " " << pic << " " << product_id(flag) << endl;
        break; }
    case 6: {ofstream supermarket("supermarket", ios::app);
        supermarket << this->namee << " " << this->price << " " << this->quantity << " " << pic << " " << product_id(flag) << endl;
        break; }

    }
        
    }


