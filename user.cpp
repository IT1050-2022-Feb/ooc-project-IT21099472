#include "user.h"

user::user() {
}
user::user(string id, string name, string email, int phone, string username, string password) {
	user_id = id;
	user_name = name;
	user_email = email;
	user_tel = phone;
	u_username = username;
	u_password = password;
}
void user::setlogin()
{
}
;

void user::displayuser() {
	cout << "user id:" << user_id << endl;
	cout << "user name:" << user_name << endl;
	cout << "email:" << user_email << endl;
	cout << "phone number:" << user_tel << endl;
	cout << "username:" << u_username << endl;
	cout << "password:" << u_password << endl;
};
void user::setid(string x) {
	user_id = x;
};
string user::getid() {
	return user_id;
}