#pragma once
#include "header.h"
class Circle{
	private:
		Point m_center;
		double m_radius;
	public:
		int isInCircle(Point & p);
		void setCircleCenter(Point & p);
		void setCircleRadius(double r);
		void getCircle();
};
