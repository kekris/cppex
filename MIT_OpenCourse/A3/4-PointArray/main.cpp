#include "geometry.h"
int main(){
	Point p1 = Point(2,3);
	Point p2(3,3);
	Point p3(4,3);
	Point pts[3];
	pts[0] = p1;
	pts[1] = p2;
	pts[2] = p3;
	
	PointArray pa1(pts,3);
	PointArray pa2 = pa1;

	pa2.print();
	
	cout << "-----------------------------------" << endl;
	
	pa2.resize(10);
	pa2.print();
	
	return 0;
}
