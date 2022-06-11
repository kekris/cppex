#include "environ.h"
void getusrinput(Cube & c1){
	double usrinput; char dim;
	for (int i=0; i < 3; i++){
		if (i == 0){
				dim = 'L';
		} else if (i==1){
				dim = 'W';
		} else { 	dim = 'H';
		}				
		cout << "Input the " << dim << " of the cube: " << endl;
		cin >>  usrinput;
		c1.setDimension(usrinput,dim);
	}
};

bool isSame(Cube & c1, Cube & c2){
	if (c1.getVolume() == c2.getVolume() && c1.getArea() == c2.getArea()){
		return true;
	}
	return false;
}

