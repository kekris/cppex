#include"func.h"
void PrintMenu(){
	cout << "**************************************"<< endl;
	cout << "**********  1. Add Contact  **********"<< endl;
	cout << "**********  2. Show Contact **********"<< endl;
	cout << "**********  3. Del Contact  **********"<< endl;
	cout << "**********  4. Search       **********"<< endl;
	cout << "**********  5. Modify       **********"<< endl;
	cout << "**********  6. Delete All   **********"<< endl;
	cout << "**********  0. Exit         **********"<< endl;
	cout << "**************************************"<< endl;
	cout << "**************************************"<< endl;
};
/*---------------------------------------------------------------------------*/
void AddContact(addrbook * a){
	system("clear");
	if (a->contactnum == MAX){
		cout << "Addressbook is full." << endl;
		return;
	}
	else{
	cout << "Adding new contact: " <<endl;
	cout << "Name: ";
	cin >> a->contactarray[a->contactnum].name;
	cout << "Mobile: "; 
	cin >> a->contactarray[a->contactnum].mbnum;
	cout << "Address: "; 
	cin >> a->contactarray[a->contactnum].address;
	cout << "Zip: "; 
	cin >> a->contactarray[a->contactnum].zip;
	a->contactnum++ ;	
	cout << "Successful!" << endl;
	}
};
/*---------------------------------------------------------------------------*/
void PrintContacts(addrbook * a){
	system("clear");
	if (a->contactnum == 0) {
		cout << "Book Empty." << endl;
		return;
	}
	else{
		system("clear");
		cout << "Printing all contacts: " << endl;
		for (int i = 0; i<a->contactnum;i++){
		cout << a->contactarray[i].name <<"\t ";
		cout << a->contactarray[i].mbnum <<"\t ";
		cout << a->contactarray[i].address <<"\t ";
		cout << a->contactarray[i].zip << endl;
		}
	}
};
/*---------------------------------------------------------------------------*/
int NameInquiry(addrbook * a, string * name, int b = 0){
	for (int i=b;i<a->contactnum;i++){
		if (a->contactarray[i].name == *name){
			return i;
		}
	}
	return -1;
};
/*---------------------------------------------------------------------------*/
void DelContact(addrbook*a){
		system("clear");
		string name;
		int result = 0;
		cout << "Delete contact: ";
		cin >> name;
		for (int j = 0; j< a->contactnum+j;j++){
		result = NameInquiry(a,&name,result);
		if (result == -1){
			if (j == 0){
			cout << name << " not found." << endl;
			}
			return;
		}
		else{
			for (int i = result; i<a->contactnum;i++){
				a->contactarray[i] = a->contactarray[i+1];
			}
			a->contactnum--;
		}
		}
};
/*---------------------------------------------------------------------------*/
void SearchContact(addrbook*a){
		system("clear");
		string name;
		int result = 0;
		cout << "Search contact: ";
		cin >> name;
		for (int j = 0; j< a->contactnum;j++){
		result = NameInquiry(a,&name,result);
		if (result == -1){
			if (j == 0){
			cout << name << " not found." << endl;
			}
			return;
		}
		else{
			cout << a->contactarray[result].name <<"\t ";
			cout << a->contactarray[result].mbnum <<"\t ";
			cout << a->contactarray[result].address <<"\t ";
			cout << a->contactarray[result].zip << endl;			
			result++;
		}
		}
};
/*---------------------------------------------------------------------------*/
void ModContact(addrbook*a){
		system("clear");
		string name;
		int result = 0;
		cout << "Modify contact: ";
		cin >> name;
		for (int j = 0; j< a->contactnum;j++){
		result = NameInquiry(a,&name,result);
		if (result == -1){
			if (j == 0){
			cout << name << " not found." << endl;
			}
			return;
		}
		else{
			cout << a->contactarray[result].name <<"\t ";
			cout << a->contactarray[result].mbnum <<"\t ";
			cout << a->contactarray[result].address <<"\t ";
			cout << a->contactarray[result].zip << endl;	
			cout << "Please input the new info for this contact: "<< endl; 
			cout << "Name: ";
			cin >> a->contactarray[result].name;
			cout << "Mobile: "; 
			cin >> a->contactarray[result].mbnum;
			cout << "Address: "; 
			cin >> a->contactarray[result].address;
			cout << "Zip: "; 
			cin >> a->contactarray[result].zip;
			cout << "Successful!" << endl;
			result++;
		}
		}
};
/*---------------------------------------------------------------------------*/
void Deleteall(addrbook*a){
	system("clear");
	int confirm = 2;
	cout << "Do you want to delete all contacts? " << endl;
	cout << "1------- YES" << endl;
	cout << "2------- NO" << endl;
	cin >> confirm;
	if (confirm == 1) {
	cout << "Delete all contacts." << endl;
	a->contactnum = 0;
	}
	else{
		cout << "Keeping contacts." << endl;	
		return;
	}
}
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
