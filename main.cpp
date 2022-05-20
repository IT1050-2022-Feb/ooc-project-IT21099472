
#include <iostream>
#include <string>
#include "user.h"
#include "Review.h"
#include "contact_us.h"
#include "reservation.h"
#include "Admin.h"
#include "Resource.h"
#include "report.h"

using namespace std;

int main()
{
	//User class object
	cout << "User" << endl;
	user u2 = user("R001", "okok", "email@", 07657, "omer12", "pass#");
	u2.displayuser();

	cout << endl << endl;

	//review class object
	cout << "Review" << endl;
	Review rev1 = Review(1000, "very good", &u2);
	rev1.displayReviewDetails();

  	//reservation class object
	cout << "Reservation" << endl;
	reservation rs1 = reservation("RS001", "2000/02/01", "2000/02/07", 2, 3, 5, &u2, &r1);
	rs1.displayReservation();

	cout << endl << endl;

  	//contactus class object
	cout << "Contact Us" << endl;
	contact_us cu1 = contact_us("cu0001", "Kumara@gmail.com", "Good", 715869009, &u2);
	cu1.displayCu();

	cout << endl << endl;
  
  //admin class object
	cout << "admin" << endl;
	Admin admin1;
	admin1.displaydetails();

	cout << endl << endl;
  
	//resources class object
	cout << "Resources" << endl;
	Resource r1 = Resource("RE100", "Amaya", 1000.00, "event");
	r1.displayResource();

  cout << endl << endl;

  //report class object
	report report1=report("RP001",&rs1);
	report1.displayReservationReport();

  
}