#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14159

int main()
{
	int radius;
	cout << "Please enter a value for the radius: ";
	cin >> radius;

	cout << setprecision(2) << fixed;
	cout << "The area of your circle is: " << PI * radius * radius << endl;
	
	return 0;

}