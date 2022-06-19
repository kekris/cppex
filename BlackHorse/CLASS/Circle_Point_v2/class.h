#pragma once
#include "link.h"
class Point{
	private:
		double p_mx, p_my;
	public:
		Point();
		Point(double a, double b);
		Point(const Point & p);
		double PointGetX();
		double PointGetY();
		void SetX(double a); 
		void SetY(double a);
		void ShiftPoint(double a, double b);
};
class Circle{
	private:
		Point center;
		double radius;
	public:
		Circle(); // constructor
		Circle(Point & p, double r); // initialiser constructor
		Circle(const Circle & c); // copy constructor
		void SetRadius(double r);
		void SetCenter(const Point & p);
		double GetRadius();		
		int IsInCircle(Point &p);
		bool IsIdentical(Circle &c);
};

