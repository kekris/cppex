#include "header.h"
// Input a Point and then outputs if the point is within/on/outside a given circle (P105?)
int main(){
	Point center,P;	double r; Circle c;
	center.setPoint(5,5); r = 10;
	c.setCircleCenter(center); c.setCircleRadius(r);
	P.setPoint(5,5);
	c.isInCircle(P);
	return 0;
}
