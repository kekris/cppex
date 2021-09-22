#include<iostream>
#include"func.h"
using namespace std;
/* 
	3 teachers -> 5 students each 
	teacher: need to store teacher name, and students
	student: need to store name, score
*/



int main(){
	int tnum, snum;
	srand(time(NULL));	
	cout << "The total number of teachers: "; cin >> tnum;
	cout << "The total number of students: "; cin >> snum;
	struct student s[snum];
	struct teacher t[tnum]; 
	
	for (int i = 0; i<tnum; i++) readin(&t[i],i,snum);
	
	for (int i = 0; i<tnum; i++) print_t(&t[i],snum);

	return 0;
}
