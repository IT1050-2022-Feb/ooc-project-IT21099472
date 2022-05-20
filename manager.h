#pragma once
#include <iostream>
#include <string>
using namespace std;

//Class manager
class manager {
private:
	string manager_id;
	string manager_name;
	string manager_username;
	string manager_password;

public:
	manager();
	manager(string m_id, string m_name, string m_username, string m_password);
	void displayDetails();
	void respond_Contact_Us();

};

