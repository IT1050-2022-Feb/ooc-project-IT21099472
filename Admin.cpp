#include "Admin.h"

Admin::Admin()
{
};

Admin::Admin(string ad_id, string ad_name, string ad_username, string ad_password, contact_us* con, Resource* ress, Review* rww, manager* manager11)
{
	admin_Id = ad_id;
	admin_Name = ad_name;
	admin_Username = ad_username;
	admin_Password = ad_password;
	contact = con;
	res = ress;
	rw = rww;
	manager1 = manager11;
};

void Admin::displaydetails()
{
	cout << "Admin Id:" << admin_Id<<endl;
	cout << "Admin name:" << admin_Name<<endl;
	cout << "Admin username:" << admin_Username<<endl;
	cout << "Admin password:" << admin_Password<<endl;
};


void Admin::addResource()
{
}

void Admin::displayReview()
{
}

void Admin::editResource()
{
}

void Admin::displayIncomeReport()
{
}

void Admin::displayContactUs()
{

}