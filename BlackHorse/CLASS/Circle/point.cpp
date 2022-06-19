#include "header.h"
void Point::getPoint(){
	cout << "Point: " << '(' <<m_X << ',' << m_Y << ')' << endl;
};
void Point::setPoint(double x, double y){
	m_X = x; m_Y = y;
};
double Point::getPointX(){
	return m_X;
};
double Point::getPointY(){
	return m_Y;
};

