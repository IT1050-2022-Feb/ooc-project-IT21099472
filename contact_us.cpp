#include "contact_us.h"

contact_us::contact_us() {};
contact_us::contact_us(string c_id, string c_email, string c_massage, int c_tel, user* uu1) {

	cu_id = c_id;
	cu_email = c_email;
	cu_message = c_massage;
	cu_telno = c_tel;
	u1 = uu1;
};
void contact_us::displayCu() {

	cout << "Custmer Id:" << cu_id << endl;
	cout << "Custmer Email:" << cu_email << endl;
	cout << "Custmer Message:" << cu_message << endl;
	cout << "Custmer Telnumber:" << cu_telno << endl;
	cout << "User id:" << u1->getid() << endl;
};
void contact_us::addCu() {

};
