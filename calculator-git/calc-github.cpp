#include <iostream>
using namespace std;

void main()
{
	int x=0, y=5, z;
	z = x + y;
	x = z - 2;
	z = y / 5;
	cout << "addition of x + y = " << z << endl;
	cout << "subtraction of z - 2 = " << x << endl;
	cout << "divsion of y / 5 = " << z << endl;

	// branch1
	z = ( y / x ) + 9;
	cout << "The result of the " << endl;
	cout << "calculation of ( y / x ) + 9 = " << z << endl;
	cout << "... end of program ...";
}