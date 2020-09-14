//This program creates a Mortgage class to calculate your mortgage payment and the total paid
//over the time period of the loan
//Kyle Smart 3/8/2017
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Mortgage  			//Mortgage class
{
	private:
		double loan; 		//private variables
		double interest;
		int years;

	public:
		Mortgage() 			//default constructor
		{
			loan = 0.0;
			interest = 0.0;
			years = 0;
		}
		void setLoan(double amount) 	//mutators
		{
			loan = amount;
		}
		void setInterest(double rate)
		{
			interest = rate;
		}
		void setYears(double year)
		{
			years = year;
		}
		double getPayment() const; 		//functions
		double getTotal() const;

};

double Mortgage::getPayment() const  	//function definitions for getting payment
{
	double term;
	term = pow((1+((interest/100)/12)), (12 * years));

	return ((loan *(( interest/100)/12) * term) / (term -1));
}

double Mortgage::getTotal() const  		//function definitions for getting total paid
{
	return (Mortgage::getPayment() * 12 * years);
}


int main()
{
	double interest, amount;
	int year;
	Mortgage myMort; 		//Mortage data type


	cout << "Please enter your loan amount: "; 		//getting loan amount
	cin >> amount;

	cout << "Please enter your interest rate: "; 	//getting interest rate
	cin >> interest;

	cout << "Please enter the number of years for your loan: "; 	//getting number of years
	cin >> year;

	while ((amount < 0) || (interest < 0) || (year < 0))  			//checking for negative 
	{ 																//values
		if (amount < 0)
		{	cout << "Invalid value! Please enter a non-negative amount: ";
			cin >> amount;
		}
		if (interest < 0)
		{	cout << "Invalid value! Please enter a non-negative interest rate: ";
			cin >> interest;
		}
		if (year < 0)
		{	cout << "Invalid value! Please enter year more than 0: ";
			cin >> year;
		}
	}
	myMort.setLoan(amount); 			//calling mutator functions
	myMort.setInterest(interest);
	myMort.setYears(year);

	//displaying results of calculations

	cout << endl <<"Your monthly mortgage payment is $" << myMort.getPayment() << endl;
	cout << "The total amount you will pay for your mortgage is $" << myMort.getTotal() << endl;
	cout << endl;



	return 0;

}








