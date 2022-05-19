#pragma once
#include <iostream>
#include <string>
using namespace std;

class user {
private:
    string user_id;
    string user_name;
    string user_email;
    int user_tel;
    string u_username;
    string u_password;

public:
    user();
    user(string id, string name, string email, int phone, string username, string password);
    void setlogin();
    void displayuser();
    void setid(string x);
    string getid();
};
