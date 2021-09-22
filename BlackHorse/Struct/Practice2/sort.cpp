#include"head.h"
void initialise(struct Hero *H, int i){
	string nameseed = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	H->name = "Hero_"; H->name += nameseed[i];
	H->sex = rand()%2;
	H->age = rand()%10 + 20;
};
void printHero(struct Hero H){
	string a;
	if (H.sex == 0) {a = "M";}
	else{a = "F";}
	cout << "Hero: " << H.name << "\t Age: " << H.age << "\t Sex: " << a << endl;

};
void bubblesort(struct Hero H[], int size){
	for (int j = 0; j<size-1; j++){
		for (int i = 0; i<size-j-1; i++){
			if ( H[i].age > H[i+1].age){
				int temp_age = H[i].age;
				int temp_sex = H[i].sex;
				string temp_name = H[i].name;
				H[i].age = H[i+1].age;
				H[i].sex = H[i+1].sex;
				H[i].name = H[i+1].name;
				H[i+1].age = temp_age;
				H[i+1].name = temp_name;
				H[i+1].sex = temp_sex;
			} 
		}	
	}

};

