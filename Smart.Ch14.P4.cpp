//This program has a NumDays class that will have overloaded operator functions
//Kyle Smart 4/5/2017
#include <iostream>
using namespace std;

class NumDays
{
private:
	int hours;
public:
	NumDays()
	{
		hours = 0;
	}
	NumDays(int time)
	{
		hours = time;
	}
	void sethours(int time)
	{
		hours = time;
	}
	int gethours() const;						//accessor function
	int getnumdays() const;						//getting total days worked
	int getnumhours() const;					//getting hours after days worked
	NumDays operator + (const NumDays &right); 	//overloaded + operator
	NumDays operator - (const NumDays &right); 	//overloaded - operator
	NumDays operator ++();						//overloaded posftix ++ operator
	NumDays operator ++ (int a);				//overloaded prefix ++ operator
	NumDays operator -- ();						//overloaded postfix -- operator
	NumDays operator -- (int a); 				//overloaded prefix -- operator
};

int NumDays::gethours() const
{
	return hours;
}
int NumDays::getnumdays() const
{
	int day;
	const int daytime = 8;

	day = hours / daytime;

	return day;

};

int NumDays::getnumhours() const
{
	const int daytime = 8;
	int hoursw;

	hoursw = hours % daytime;

	return hoursw;
}

NumDays NumDays::operator+(const NumDays &right)
{
	hours += right.hours;
	return *this;
}

NumDays NumDays::operator-(const NumDays &right)
{
	hours -= right.hours;
	return *this;
}

NumDays NumDays::operator++()
{
	++hours;
	getnumdays();
	getnumhours();
	return *this;
}

NumDays NumDays::operator++(int a)
{
	NumDays temp(hours);
	hours++;
	getnumdays();
	getnumhours();
	return temp;
}

NumDays NumDays::operator--()
{
	--hours;
	getnumdays();
	getnumhours();
	return *this;
}

NumDays NumDays::operator--(int a)
{
	NumDays temp(hours);
	hours--;
	getnumdays();
	getnumhours();
	return temp;
}


int main()
{
	int hour;
	NumDays First(8), Second(15);

	//cout << "Please enter your hours worked: ";
	//cin >> hour;

	//First.sethours(hour);

	//cout << "You worked " << First.getnumdays() << " days and " << First.getnumhours() << " hours.\n";

	First + Second;
	cout << First.gethours() << " " << Second.gethours() << endl;

	First - Second;
	cout << First.gethours() << " " << Second.gethours() << endl;

	First++;
	cout << First.gethours() << " " << Second.gethours() << endl;

	++First;
	cout << First.gethours() << " " << Second.gethours() << endl;

	--Second;
	cout << First.gethours() << " " << Second.gethours() << endl;

	Second++;
	cout << First.gethours() << " " << Second.gethours() << endl;

	return 0;
}	



