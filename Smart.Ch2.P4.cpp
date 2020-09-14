#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float money;
	cout << "Please enter amount to be taxed: $";
	cin >> money;

	cout << setprecision(2) << fixed;
	cout << "With tax added: $" << money * 1.05 << endl;
	return 0;
}