#include "environ.h"
int main(){
	student s1,s2;
	s1.setName("ALPHA GO");
	s1.setSID(100000);
	s2.setName("BETA GO");
	s2.setSID(100001);
	
	s1.getName();
	cout << "SID: " << s1.getSID() << endl;
	s2.getName();
	cout << "SID: " << s2.getSID() << endl;
	
	return 0;
}
