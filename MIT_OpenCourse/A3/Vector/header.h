#include<iostream>
using namespace std; 
class point{
	public: double x,y;
};
class Vector{
	public: point start, end;
};
void OffsetVec(Vector * vec1, double offsetx, double offsety);

