#include "Resource.h"

void Resource::setid(string id) {
	re_id = id;
};

string Resource::getid() {
	return re_id;
};

Resource::Resource() {
};

Resource::Resource(string Res_Id, string Res_Name, double Res_Amount, string Res_Type) {

	re_id = Res_Id;
	re_name = Res_Name;
	re_amount = Res_Amount;
	resource_type = Res_Type;
};
void Resource::addResource() {

};
void Resource::editResource() {

};
void Resource::displayResource() {
	cout << "Resource Id:" << re_id << endl;
	cout << "Resource Name:" << re_name << endl;
	cout << "Resource Amount:" << re_amount << endl;
	cout << "Resource Type:" << resource_type << endl;
};