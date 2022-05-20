#include "manager.h"

manager::manager() {};
manager::manager(string m_id, string m_name, string m_username, string m_password) {

	manager_id = m_id;
	manager_name = m_name;
	manager_username = m_username;
	manager_password = m_password;
};
void manager::displayDetails() {

	cout << "Manager Id:" << manager_id << endl;
	cout << "Manager Name:" << manager_name << endl;
	cout << "Manager Username:" << manager_username << endl;
	cout << "Manager Password:" << manager_password << endl;



};
void manager::respond_Contact_Us() {};
