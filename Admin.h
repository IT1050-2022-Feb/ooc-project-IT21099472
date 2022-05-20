#pragma once
#include <iostream>
#include <string>
#include "contact_us.h"
#include "Resource.h"
#include "manager.h"
#include "review.h"
using namespace std;



//Admin Class
class Admin
{
private:
	string admin_Id;
	string admin_Name;
	string admin_Username;
	string admin_Password;
	contact_us* contact;
	Resource* res;
	Review* rw;
	manager* manager1;



public:
	Admin();
	Admin(string ad_id, string ad_name, string ad_username, string ad_password,contact_us*con, Resource* ress, Review* rww, manager* manager11);
	void displaydetails();
	void addResource();
	void displayReview();
	void editResource();
	void displayIncomeReport();
	void displayContactUs();
};