#pragma once
#include <iostream>
#include <string>
#include "reservation.h"
using namespace std;


//Report Class
class report {
private:
	string report_Id;
	reservation* res;

public:
	report();
	report(string rep_id, reservation* ress);
	void displayIncomeReport();
	void displayReservationReport();
};
