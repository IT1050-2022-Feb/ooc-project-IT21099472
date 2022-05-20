#include "report.h"

report::report() {};
report::report(string rep_id, reservation* ress) {
	report_Id = rep_id;
	res = ress;
};
void report::displayIncomeReport() {};
void report::displayReservationReport() {
  
		cout << "Report - Reservation:";
		cout<< res->getReservationDetails() << endl;

};