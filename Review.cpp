#include "Review.h"

Review::Review() {};
Review::Review(int review_num, string review_Ra, user* uu1) {
	review_Id = review_num;
	review_Rating = review_Ra;
	u1 = uu1;
};

void Review::displayReviewDetails() {
	cout << "Review ID: " << review_Id << endl;
	cout << "Review Rating:" << review_Rating << endl;
	cout << "User id:" << u1->getid() << endl;
};