//This program is going to calculate the gross and net income for a theater
//and also show what gets paid to Box office
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Gross and net box office for a night
	//Name, adult tickets($10), child tickets($6)
	string name;
	double adult, child, gross, net, paid;

	//Getting information for program from user
	cout << "Please enter the name of the film: " ;
	getline(cin,name);
	cout << "Please enter the amount of adult followed by child tickets sold: ";
	cin >> adult >> child;

	//Printing out basic info
	cout << "Movie Name: \t\t\t\t\t"<<name << endl;
	cout << setprecision(4);
	cout << "Adult tickets sold:  \t\t\t\t" << adult << endl;
	cout << "Child Tickets sold: \t\t\t\t" << child << endl;

	//doing calculations here to save room on cout 
	gross = (adult*10)+(child*6);
	net = ((adult*10)+(child*6))*0.2;

	//Printing remaining information
	cout << setprecision(2) << fixed;
	cout << "Gross Box Office Profit: \t\t\t" << "$" << gross << endl;
	cout << "Net Box Office Profit: \t\t\t\t" << "$" << net << endl;
	cout << "Amount Paid to Distributor: \t\t\t" << "$" << gross - net << endl;

	return 0;
}