#include "class.h"
Point::Point():p_mx(0),p_my(0){};
Point::Point(double a, double b): p_mx(a), p_my(b) {
};
Point::Point(const Point & p){
	p_mx = p.p_mx; p_my = p.p_my;
};
double Point::PointGetX(){
	return p_mx;
};
double Point::PointGetY(){
	return p_my;
};
void Point::SetX(double a){
	p_mx = a; 
}; 
void Point::SetY(double a){
	p_my = a;
};
void Point::ShiftPoint(double a, double b){
	p_mx +=a; p_my +=b;
};
