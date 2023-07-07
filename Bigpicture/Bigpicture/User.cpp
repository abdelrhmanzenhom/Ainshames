#include "User.h"
#include<string>
#include<iostream>
#include <fstream>
#include <vector>
#include <map>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace System;
User::User()
{

}
User::User( string user_name, string addr, int phone_num)
{
    
    this->user_name = user_name;
    this->address = addr;
    this->phone_Number = phone_num;
}

int User::autoid() {
    int idd = 0;
    vector<int>s;
    fstream f("log.text", ios::in);
    string str, abdo;
    int iddd;
    string fo;

    while (f >> str >> abdo >> iddd >> fo) {

        s.push_back(iddd);

    }
    
    idd = s.size() + 1;
    return idd;
}

void User::sign_up(System::String^ s1, System::String^ s2, System::String^ s4)
{
    
    User user;
    vector<User>user_vec;

    int xx = 0;


    string username, passsword, rid, rpas;
    std::string S1 = msclr::interop::marshal_as<std::string>(s1);
    std::string S2 = msclr::interop::marshal_as<std::string>(s2);
    id = autoid();
    std::string S4 = msclr::interop::marshal_as<std::string>(s4);
    int phone = stoi(S4);
    ofstream save("log.text", ios::app);


    user.user_name = S1;
    user.address = S2;
    user.id = id;
    user.phone_Number = phone;
    user_vec.push_back(user);
    for (int i = xx; i < user_vec.size(); i++)
    {

        save << user_vec[i].user_name << " " << user_vec[i].address << " " << user_vec[i].id << " " << user_vec[i].phone_Number << endl;

    }
    xx++;

    
    
}
bool User::login(System::String^ s3, System::String^ s4)
{
    bool ans = 0;
    string username, pas;
    std::string S3 = msclr::interop::marshal_as<std::string>(s3);
    std::string S4 = msclr::interop::marshal_as<std::string>(s4);


    int id, number;
    ifstream input("log.text");
    while (input >> username >> pas>>id>>number)
    {
        map<string, string>r;
        r.insert({ username,pas });                       //push file to map

        for (map<string, string>::iterator it = r.begin(); it != r.end(); it++)
        {
            if (it->first == S3 && it->second == S4)            //key and value loop
            {
                ans = 1;
            }
        }

    }
    input.close();
    return ans;
}


void User::GUI()
{
    while (true)
    {
        cout << "1) sign up" << endl;
        cout << "2) login" << endl;
        cout << "3) logout" << endl;
        int choise;
        cin >> choise;
        

    }
}
