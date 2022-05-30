#include "header.h"
int main(){
	int n = 6;
	int nz = pow(2,n)+1;	int nx = nz;	
	float L = 13.8, D = 3.7; 
	double res = 1e-10, dx = D/(nx-1), dz = L/(nz-1);
	double x[nx], z[nz]; 
	initialise_coordinate(nx, nz, dx, dz, x, z);
	double BCT = 3382.0, BCB = 212.0, BCL = 0.0, BCR = 0.0;
	double calc_res = 1, alpha = pow(dz,2.0)/(2*pow(dx,2.0)+2*pow(dz,2.0)), gamma = pow(dx,2.0)/(2*pow(dx,2.0)+2*pow(dz,2.0));
	double ** T, **T_old;  // pointer to the 2D array
	T = new double *[nz]; T_old = new double *[nz];	// T is then a 1D array of pointers, type double * [nz] 
	for (int j = 0; j < nz; j++) { 
		T[j] = new double [nz]; T_old[j] = new double [nz]; // Each element of T is then a 1D array of double [nz]
	}
	initialise_TemperatureField(BCT, BCB, BCL, BCR, nx, nz, T, T_old);	
	GaussSeidel(T, T_old, nx, nz, &calc_res, res, alpha, gamma);
	cout << "Mid-point Temperature: T(33,33) = " << T[33-1][33-1] << endl;
//	printTemp(T, nx, nz);
	return 0;
}
