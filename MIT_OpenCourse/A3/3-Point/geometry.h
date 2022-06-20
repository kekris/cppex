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

