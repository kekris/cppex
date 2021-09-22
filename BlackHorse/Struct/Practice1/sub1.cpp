#include"func.h"
void readin(struct teacher *t, int a, int snum){
// initialise 
	string nameseed= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	t->tname = "Teacher_";
	t->tname += nameseed[a];
	for (int j = 0; j < snum; j++) {
			t->sarray[j].sname = "S";
			t->sarray[j].sname += nameseed[j];	
			t->sarray[j].score = rand()%101;		
	}
};
void print_t(struct teacher *t, int snum){
		cout << "Teacher: " << t->tname << endl;
		cout << "Students: " << endl;
	for (int i = 0; i<snum; i++){
		cout << t->sarray[i].sname << "\t";
	}
	cout << endl;
	for (int i = 0; i<snum; i++){
		cout << t->sarray[i].score << "\t";
	}	
	cout << endl;

};


