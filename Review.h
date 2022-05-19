#pragma once
#include <iostream>
#include <string>
#include "user.h"
using namespace std;


//Review class
class Review {
private:
	int review_Id;
	string review_Rating;
	user* u1;

public:
	Review();
	Review(int review_num, string review_Ra, user* uu1);
	void displayReviewDetails();
};
