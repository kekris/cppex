#include<iostream>
#include<cmath>
using namespace std;
void initialise_coordinate(int nx, int nz, double dx,double dz, double *x, double *z);
void initialise_TemperatureField(double BC_top, double BC_bottom, double BC_left, double BC_right, int nx, int nz, double **T,double** T_old);
void GaussSeidel(double **T, double **T_old, int nx, int nz, double *calc_res, double res, double alpha, double gamma);
void printTemp(double **T, int nx, int nz);
