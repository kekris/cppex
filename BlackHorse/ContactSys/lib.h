//This header claims global variables
#include<iostream>
#define MAX 1000
using namespace std;
	class contacts{
	public: 
		string name;
		int mbnum;
		string address;
		int zip;		
	};
	class addrbook{
	public:
		class contacts contactarray[MAX];
		int contactnum;
	};
