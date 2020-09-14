//This program will generate two random numbers to be a math tudor
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1, num2, sum, enter;
	const int MIN = 1;
	const int MAX = 999;

	//Generating random numbers larger than 1 but less than 999
	srand(time(0));
	num1 = (rand() % (MAX-MIN +1)) + MIN;
	num2 = (rand() % (MAX-MIN +1)) + MIN;

	//Printing numbers
	cout << " " <<  num1 << endl << "+" << num2 << endl;
	cin.get();

	//printing numbers with solution
	cout << " " <<  num1 << endl << "+" << num2 << endl << num1 + num2 << endl;

	return 0;
}