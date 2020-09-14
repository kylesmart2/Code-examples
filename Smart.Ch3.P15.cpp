//This program calculates property taxes based on the property's value
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Tax is based off of 60% assement value of property
	//Tax is $0.75 per $100 of that value
	//Show assement value and taxes owed value
	double value, newval, tax;

	//Prompt user to enter assesd proptery value
	cout << "Please enter the assessed value of your proptery: $";
	cin >> value;

	//Calculate 60% of assessed value
	newval = value * .60;

	//Calculate taxes owed based on new value
	tax = newval/100 * .75;

	//Printout
	cout << setprecision(2) << fixed;
	cout << "Assessment value: \t\t$" << newval << endl;
	cout << "Proptery tax: \t\t\t$" << tax << endl;

	return 0;
}