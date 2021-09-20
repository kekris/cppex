#include<iostream>
using namespace std;
// System generates a random number between 0--100.
// The player would have to guess the random number. 
int main(){
	int guess, rand_num, i = 1;
	cout << "System has generated a number." << endl;
	srand (time(NULL));
	rand_num = rand()%100 + 1;
	cout << "Your guess is: "; cin >> guess; 
	while (guess != rand_num) {
		if (guess > rand_num) {
		cout << "Your guess "<< guess <<" is too large! Guess again: ";
		cin >> guess;		
		}	
		else{
		cout << "Your guess "<< guess <<" is too small! Guess again: ";
		cin >> guess;
		}
		i++;
	}
	cout << "Grats! Your guess " << guess << " is correct!"<< endl;
	cout << "You have guessed " << i << " times." << endl;
	return 0;
}

