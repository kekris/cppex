#include "class.h"
// same as Circle.proj; with the use of constructors, etc..
int main(){
	Point p1(1,1), p2(2,2), p3(3,3);
	double r1 = 1.0, r2 = 10;
	Circle c1(p1,r1); 
	Circle c2 = c1; 
	p2.ShiftPoint(1,1);	//now p2 = 3,3
	c2.SetCenter(p2); 
	Circle c3(p3,r1);
	if ( c2.IsIdentical(c3) ) { cout << "c2 identical to c3" << endl; } else { cout << "c2 not identical to c3" << endl; };
	c2.IsInCircle(p1);c3.IsInCircle(p1);
	c3.SetRadius(r2);
	if ( c2.IsIdentical(c3) ) { cout << "c2 identical to c3" << endl; } else { cout << "c2 not identical to c3" << endl; };
	c2.IsInCircle(p1);c3.IsInCircle(p1);
	
	return 0;
}
