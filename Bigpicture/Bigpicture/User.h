#include<string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace System;

class User
{
public:
	int id;
	string 	user_name;
	string	address;
	int phone_Number;
	int autoid();
	User();
	User( string user_name, string addr, int phone_num);
	void sign_up(System::String^ s1 ,System::String^ s2, System::String^ s4);
	bool login(System::String^s3,System::String^s4);
	void GUI();

};