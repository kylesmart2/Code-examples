#include <iostream>
#include <complex>
using namespace std;

int main()
{
	int num;
	cout << "Please enter an integer: ";
	cin >> num;

	num =(3 * pow(num,5))+(2 * pow(num,4))-(5 * pow(num,3))-(pow(num,2))+(7 * num)-6;

	cout << "Once it is put through the following polynomial: " << endl;
	cout << "3x^5+2x^4-5x^3-x^2+7x-6, it equals: " << num << endl;
	//cout << (3 * pow(num,5))+(2 * pow(num,4))-(5 * pow(num,3))-(pow(num,2))+(7 * num)-6 << endl;


	return 0;
}