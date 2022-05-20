#pragma once
#include <iostream>
#include <string>
using namespace std;

// resource class
class Resource {
private:
	string re_id;
	string re_name;
	double re_amount;
	string resource_type;

public:
	Resource();
	Resource(string Res_Id, string Res_Name, double Res_Amount, string Res_Type);
	void addResource();
	void editResource();
	void displayResource();
	void setid(string id);
	string getid();
};