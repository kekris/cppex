#include<iostream>
#include"head.h"
using namespace std;
int main(){
	srand(time(NULL));
	int hnum;
	cout << "Number of Heroes: "; cin >> hnum;
	struct Hero hero[hnum];
	for (int i = 0; i<hnum; i++) {
	initialise(&hero[i],i);
	printHero(hero[i]);
	}
	cout << "Bubble sorting..." << endl;
	bubblesort(hero, hnum);
	cout << "Sorted list: " << endl;
	
	for (int i = 0; i<hnum; i++) {
	printHero(hero[i]);
	}
	return 0;
}
