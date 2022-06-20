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
void setX ( int newX ) ;
};

void Point::setX ( int newX ) { x = newX ; } // Need to specify the class Point::
int main ()
{
Point p (5 , 3) ;
p . setX (0) ;
cout << p . getX () << " " << " \n " ;
return 0;
}
