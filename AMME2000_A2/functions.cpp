#include "header.h"
void initialise_coordinate(int nx, int nz, double dx,double dz, double *x, double *z){
	x[0] = 0.0; z[0] = 0.0;
	for (int i =1; i<nx; i++) {
		x[i] = x[i-1]+dx;
		}
	for (int i =1; i<nz; i++) {
		z[i] = z[i-1]+dz;
		}
	return;
}
void initialise_TemperatureField(double BC_top, double BC_bottom, double BC_left, double BC_right, int nx, int nz, double **T, double **T_old){
	for (int i =0; i<nx; i++){
		for (int j = 0; j<nz; j++){	
			if ( i==0 ) {
				T[i][j] = BC_left;
			} else if (i==nx-1) {
				T[i][j] = BC_right;				
			} else if (j==0) {
				T[i][j] = BC_top;				
			} else if (j==nz-1) {
				T[i][j] = BC_bottom;				
			} else {
				T[i][j] = 0.0;
			} 
			T_old[i][j] = T[i][j];
		}	
	} 
	return;
}
void GaussSeidel(double **T, double **T_old, int nx, int nz, double *calc_res, double res, double alpha, double gamma){		
		double sum_res; int counter=0;
		while (*calc_res >= res){
			sum_res = 0;
			for (int i = 1; i < nx - 1; i++){
				for (int j = 1; j < nz - 1; j++){
					T[i][j] = alpha * (T_old[i+1][j] + T[i-1][j]) + gamma * (T_old[i][j+1] + T[i][j-1]);
					sum_res = sum_res + abs(T[i][j]-T_old[i][j]);
				}			
			}
			*calc_res = sum_res/nx/nz; 
			if (counter % 500 == 0) {
			cout << "Iteration: " << counter << endl;
			cout << "Current residual: " << *calc_res << "; Target Residual: " << res << endl;}
			for (int i = 1; i < nx - 1; i++){
				for (int j = 1; j < nz - 1; j++){
					T_old[i][j] = T[i][j];
				}
			}
			counter++;
		}
	return;
}
void printTemp(double **T, int nx, int nz){
	for (int j = 0; j < nz; j++){
		for (int i = 0; i < nx; i++){
			cout << T[i][j] << "  ";
		}
			cout << endl;
	}
	return;
}

