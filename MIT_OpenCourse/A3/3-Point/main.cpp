#include "geometry.h"
int main(){
	Point p;
	Point p2 = Point(2,3);
	cout << p2.getX() << endl;
	p2.setX(4);
	cout << p2.getX() << endl;
	return 0;
}
