#include "geometry.h"
int Point::getX() const{
	return x;
};
int Point::getY() const{
	return y;
};
void Point::setX(const int new_x){
	x = new_x;
};
void Point::setY(const int new_y){
	y = new_y;
};
PointArray::PointArray(const Point pts[], const int s){
	size = s;
	points = new Point [size];
	for ( int i = 0; i < size; i++){
		points[i] = pts[i];
	}
};

PointArray::PointArray(const PointArray &pv){
	size = pv.size;
	points = new Point [pv.size];
	for ( int i = 0; i < size; i++){
		points[i] = pv.points[i];
	}
};
void PointArray::resize(int n){
	size = n;
};
