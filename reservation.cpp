#include "reservation.h"

reservation::reservation() {};
reservation::reservation(string id, string in, string out, int big, int small, int no, user* uu1, Resource* res1) {
	rs_id = id;
	rs_checkin_date = in;
	rs_checkout_date = out;
	no_adult = big;
	no_children = small;
	quantity = no;
	u1 = uu1;
	res = res1;
}
void reservation::setReservationDetails(string id, string in, string out)
{
	rs_id = id;
	rs_checkin_date = in;
	rs_checkout_date = out;

}

string reservation::getReservationDetails()
{
	return rs_id;
	return rs_checkin_date;
	return rs_checkout_date;
};


void reservation::displayReservation() {
	cout << "Reservation id:" << rs_id << endl;
	cout << "check in date:" << rs_checkin_date << endl;
	cout << "check out date:" << rs_checkout_date << endl;
	cout << "No of adult:" << no_adult << endl;
	cout << "No of children:" << no_children << endl;
	cout << "User id:" << u1->getid() << endl;
	cout << "Resource id:" << res->getid() << endl;
}
void reservation::modifyReservation()
{
}

double reservation::CalcTotal()
{
	return 0.0;
}

void reservation::setid(string id) {
	rs_id = id;
}

string reservation::getid() {
	return rs_id;
}


;