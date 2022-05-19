#pragma once
#include <iostream>
#include <string>
#include "user.h"
using namespace std;

//Class Contact US
class contact_us {
private:
	string cu_id;
	string cu_email;
	string cu_message;
	int cu_telno;
	user* u1;

public:
	contact_us();
	contact_us(string c_id, string c_email, string c_massage, int c_tel, user* uu1);
	void displayCu();
	void addCu();
};

