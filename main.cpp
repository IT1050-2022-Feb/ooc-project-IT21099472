#include <iostream>
#include <string>
#include "user.h"
#include "Review.h"

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

}