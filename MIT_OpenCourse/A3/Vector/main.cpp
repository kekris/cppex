#include "header.h"
int main(){
	Vector vec1; 
	vec1.start.x = 1.5;
	vec1.start.y = 2.5;
	vec1.end.x = 3.0;
	vec1.end.y = 4.0;
	cout << "Original Vector: (" << vec1.start.x <<","<<vec1.start.y << ") to ("<< vec1.end.x <<","<<vec1.end.y << ")"<< endl;
	OffsetVec(&vec1,1.5, 2.5);
	cout << "Offset Vector: (" << vec1.start.x <<","<<vec1.start.y << ") to ("<< vec1.end.x <<","<<vec1.end.y << ")"<< endl;
	return 0;
} 
