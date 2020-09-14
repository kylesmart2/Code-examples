#include <iostream>

using namespace std;

int main()
{
	int money;

	cout << "Enter a dollar amount: $";
	cin >> money;

	//This way is a bit excessive, but it won't print out unnecessary bills
	
	if (money/20 > 0)
		cout << "$20 bill(s): " << money/20 << endl;
		money = money % 20;
	if (money/10 > 0)
		cout << "$10 bill(s): " << money/10 << endl;
		money = money % 10;
	if (money/5 > 0)
		cout << "$5 bill(s): " << money/5 << endl;
		money = money % 5;
	if (money/1 > 0)
		cout << "$1 bill(s): " << money/1 << endl;

	return 0;

}