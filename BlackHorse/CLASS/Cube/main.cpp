#include "environ.h"
// Input the W, H, L of a cube, and then compare the volume with an existing cube until correct (P104)
int main(){
	Cube c1,c2; bool runflag=true; 
	while (runflag) {
	getusrinput(c1);
	cout << "The surface area of C1: " << c1.getArea() << endl;
	cout << "The volume of C1: " << c1.getVolume() << endl;
	c2.setDimension(4,'L');c2.setDimension(13,'W');c2.setDimension(6,'H');
	if (c2.getVolume() > c1.getVolume()) { 
	cout << "Your guess is too small! " << endl;
	} else if (c2.getVolume() < c1.getVolume()) {
	cout << "Your guess is too large! " << endl;
	} else {	cout << "Congrats!"<< endl; runflag=false;
	}
	}
	if ( c1.isSameByClass(c2) ){	cout << "Cube is exactly the same!" << endl;
	} else {			cout << "Cube is not the same though ;<" << endl;
	}
	return 0;
}
