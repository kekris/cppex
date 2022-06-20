#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Point
{
private :
int x , y ;
public :
Point ( int u , int v ) : x ( u ) , y ( v ) {}
int getX () { return x ; }
int getY () { return y ; }
void doubleVal ()
{
x *= 2;
y *= 2;
}
};
int main()
{
Point myPoint (5 , 3);	//remove const as it prevents the modification of x & y 
myPoint.doubleVal() ; // missed a semi-col;
cout << myPoint.getX () << " " << myPoint.getY() << " \n " ;
return 0;
}
