//This program accepts a non-negative integer from the user between 0 - 9999 and prints out the 
//number in its word form
//Kyle Smart 3/20/17

#include <iostream>
#include <string>
using namespace std;

class Number
{
	private:
		int num;
		static string lessThan20[20];		//static members must be private to work
		static string hundred;
		static string thousand;
	public:
		Number()
		{ num = 0; }
		void setNum(int number)
		{
			num = number;
		}
		int print(int num);				//function to print strings from private static

};

int Number::print(int num) 
{
	int thous, hund, less, original;

	original = num;
	if (original / 1000 > 0)
	{	thous = num / 1000;
		cout << Number::lessThan20[thous] << " " << thousand;
		thous = num % 1000;
	}
	if (thous / 100 > 0)
	{	hund = thous / 100;
		cout << " " << Number::lessThan20[hund] << " " << hundred;
		hund = num % 1000 % 100;
	}
	if (hund / 10 > 0)
	{	less = hund / 10;
		cout << " " << Number::lessThan20[less] << endl;
	}
	return 0;
	
}

string Number::lessThan20[20]= {"zero","one", "two", "three", "four", "five", "six", "seven", 
							"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", 
							"fifteen", "sixteen", "eighteen", "nineteen"};
string Number::hundred = "hundred";
string Number::thousand = "thousand";

int main()
{
	Number myNum;
	int num;

	cout << "Please input a number between 0 and 9999: ";
	cin >> num;						//getting user input

	if ((num < 0) || (num > 9999))			//checking non-negative and less than 10000
	{	cout << "Please enter a non-negative number not larger than 9999: ";
		cin >> num;
	}

	myNum.setNum(num); 			//calling set function
	myNum.print(num);	//calling print function
	

	return 0;
}









