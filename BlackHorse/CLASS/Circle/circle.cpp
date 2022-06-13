#include "header.h"
#include <cmath>
int Circle::isInCircle(Point & p){
	double distance = sqrt(pow(p.m_X - m_center.m_X,2)+pow(p.m_Y-m_center.m_Y,2));
	if (distance == m_radius){	
		cout << "Point on Circle." << endl;
		return 0;
	} else if (distance > m_radius) {
		cout << "Point outside Circle." << endl;
		return 1;
	} else {
		cout << "Point in Circle." << endl;
		return 2;
	}	
};
void Circle::setCircleCenter(Point & p){
	m_center = p;
};
void Circle::setCircleRadius(double r){
	m_radius = r;
};
void Circle::getCircle(){
	cout << "The center of the circle: " << endl;
	Point.getPoint(m_center);
	cout << "The radius of the circle: " << endl;
	cout << "R = " << m_radius << endl;
};
