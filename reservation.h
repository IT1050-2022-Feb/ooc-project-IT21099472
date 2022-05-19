#include <iostream>
#include <string>
#include "user.h"
#include "Resource.h"
using namespace std;

//reservation class
class reservation {
private:
	string rs_id;
	string rs_checkin_date;
	string rs_checkout_date;
	int no_adult;
	int no_children;
	int quantity;
	user* u1;
	Resource* res;

public:
	reservation();
	reservation(string id, string in, string out, int big, int small, int no, user* uu1, Resource* res1);
	void setReservationDetails(string id, string in, string out);
	string getReservationDetails();
	void displayReservation();
	void modifyReservation();
	double CalcTotal();
	void setid(string id);
	string getid();
};
