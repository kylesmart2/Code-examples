//This program calcuates the sin, cos, and tan of an angle in radians
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double angle, sine, cosine, tangent;

	//Prompt user to enter angle in radians
	cout << "Please enter the angle in radians: ";
	cin >> angle;

	sine = sin(angle);
	cosine = cos(angle);
	tangent = tan(angle);

	//Print out the above calculations to four decimal places
	cout << setprecision(4) << fixed;
	cout << "The sine of that angle is: \t" << sine << endl;
	cout << "The cosine of that angle is: \t" << cosine << endl;
	cout << "The tangent of that angle is: \t" << tangent << endl;

	return 0;
}