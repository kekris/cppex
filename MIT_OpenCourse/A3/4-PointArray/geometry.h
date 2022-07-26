#pragma once
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Point{
	private:
		int x, y;
	public:
		Point(){x = 0; y = 0;};
		Point(int a, int b): x(a), y(b){};
		int getX() const;
		int getY() const;
		void setX(const int new_x);
		void setY(const int new_y);
};
class PointArray{
	private: 
		int size;
		Point * points;
	public:
		PointArray(){size = 0;points = new Point [0];};		// constructor
		PointArray(const Point points[], const int size);		// constructor
		~PointArray(){ if (points != NULL) { delete[] points;}; };	// destructor
		PointArray(const PointArray &pv);				// copy constructor
		void print();
		void resize(int n);
		
};
