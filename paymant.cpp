#include "paymant.h"

paymant::paymant() {};
paymant::paymant(int p_id, string date, string type, user* uu1, reservation* ress) {

	Payment_Id = p_id;
	payment_date = date;
	payment_type = type;
	u1 = uu1;
	res = ress;
	

};

void paymant::setpaymentDetails() {};
void paymant::displayPaymentDetails() {
	cout << "Paymant Id:" << Payment_Id << endl;
	cout << "Paymant date:" << payment_date << endl;
	cout << "Paymant type:" << payment_type << endl;
	cout << "User id:" << u1->getid() << endl;
	cout << "Reservation id:" << res->getid() << endl;
};