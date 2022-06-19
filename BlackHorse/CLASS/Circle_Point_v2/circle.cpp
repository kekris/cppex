#include "class.h"
Circle::Circle(Point & p, double r): center(p), radius(r) {
//	center = Point(p); // invoking Point's copy constructor, or implicitly: center = p;
//	radius = r;
};
Circle::Circle(const Circle & c){ 
	center = c.center; radius = c.radius; //copy constructor
};
Circle::Circle(){
	center = Point(); radius = 1.0;
}
void Circle::SetRadius(double r){
	radius = r;
};
void Circle::SetCenter(const Point & p){
	center = p;
};
double Circle::GetRadius(){
	return radius;
};		
int Circle::IsInCircle(Point &p){
	double distance;
	distance = sqrt(pow(p.PointGetX()-center.PointGetX(),2)+pow(p.PointGetY()-center.PointGetY(),2));
	if (distance == radius) {
		cout << "Point on the Circle." << endl;	return 0;	
	} else if (distance > radius) {
		cout << "Point outside Circle." << endl;	return 1;
	} else {
		cout << "Point in the Circle." << endl;	return -1;
	};
};

bool Circle::IsIdentical(Circle &c){
	if ( center.PointGetX() == c.center.PointGetX() && radius == c.radius && center.PointGetY() == c.center.PointGetY() ){
		return true;
	} else {
		return false;
	};
};
