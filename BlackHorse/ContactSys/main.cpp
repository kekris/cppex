#include"func.h"
class addrbook book;
int main(){
	int usrinput = 0;
	book.contactnum = 0;
	while (true) {	
	PrintMenu();	
	cin >> usrinput;
	switch (usrinput){
	case 1: 
		AddContact(&book);
		break;
	case 2: 
		PrintContacts(&book);
		break;
	case 3:
		DelContact(&book);
		break;
	case 4: 
		SearchContact(&book);
		break;
	case 5:
		ModContact(&book);
		break;
	case 6: 
		Deleteall(&book);
		break;
	default:
		cout << "Goodbye!" << endl;
		return 0;
		break;
		
		} // switch case 
	} // main loop while (true)	
	return 0;
}
