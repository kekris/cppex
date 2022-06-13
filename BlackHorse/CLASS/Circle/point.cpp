#include "header.h"
void Point::getPoint(Point p){
	cout << "Point: " << '(' <<m_X << ',' << m_Y << ')' << endl;
};
void Point::setPoint(double x, double y){
	m_X = x; m_Y = y;
};
