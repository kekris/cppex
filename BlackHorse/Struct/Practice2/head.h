#include<iostream>
using namespace std;
struct Hero{
	string name;
	int age;
	bool sex; // male = 0; female = 1;
};
void initialise(struct Hero *H, int i);
void printHero(struct Hero H);
void bubblesort(struct Hero H[], int size);

