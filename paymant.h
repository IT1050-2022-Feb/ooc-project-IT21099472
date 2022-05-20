#pragma once
#include <iostream>
#include <string>
#include "user.h"
#include "reservation.h"

//Class payment
class paymant {
private:
	int Payment_Id;
	string payment_date;
	string payment_type;
	user* u1;
	reservation* res;
public:
	paymant();
	paymant(int p_id,string date,string type,user* uu1, reservation* ress);
	void setpaymentDetails();
	void displayPaymentDetails();


};
