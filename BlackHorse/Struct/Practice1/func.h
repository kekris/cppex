#include<iostream> 
using namespace std;

struct student{
	string sname;
	int score;
};
struct teacher {
	string tname;
	struct student sarray[5];
};

void readin(struct teacher *t, int a, int snum);
void print_t(struct teacher *t, int snum);

