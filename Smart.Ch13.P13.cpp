//This program tosses a three different coins. Coins are added to your total value if
//the coin lands heads up. The objective of the game is to get enough coins to total
//$1.
//Kyle Smart 3/8/2017

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

class Coin 						//new coin class
{
	private: 					//private variables
		string sideUp; 			//string that stores result of flip
	public:
		Coin(); 				//coin function seeds a time for the random and does the toss
								//function

		void toss();			//toss function gets random value of 0 or 1 to simulate heads
								//or tails

		string getSideUp()		////this function returns result of toss function
			{ return sideUp;}
};

Coin::Coin()					//coin function definition
{
	unsigned seed = time(0); 	//getting seed of the time for srand function
	srand(seed); 				//getting random number
	toss(); 					//calling toss function
}

void Coin::toss()				//toss function
{
	const int MIN = 0;
	const int MAX = 1;
	

	int value = (rand() % (MAX - MIN + 1)) + MIN; 	//getting random number of 0 or 1

	if (value == MIN)
		sideUp = "heads";							//assigning string value to private variable
	else
		sideUp = "tails";
}

int main()
{
	float balance = 0;
	string cont;
	
	Coin quarter, dime, nickel;			//defining three Coin classes

	cout << "This program flips three coins and adds the heads up coins to your balance.\n";
	cout << "The goal is to flip the coins to get a balance of $1.00 exactly.\n";
	cout << "Enter to continue...";
	getline(cin,cont);

	quarter.toss();
	dime.toss();
	nickel.toss();

	while (balance < 1.00)
	{
		if (quarter.getSideUp() == "heads")		//flipping the quarter
		{	balance += 0.25;
			cout << "The quarter landed heads up, $0.25 was added to your balance.\n";
		}
		if (dime.getSideUp() == "heads")		//flipping the dime
		{	balance += 0.10;
			cout << "The dime landed heads up, $0.10 was added to your balance.\n";
		}
		if (nickel.getSideUp() == "heads")		//flipping the nickel
		{	balance += 0.05;
			cout << "The nickel landed heads up, $0.05 was added to your balance.\n";
		}
		cout << setprecision(2) << fixed;				//I have to make it look pretty.
		cout << "Your balance is $" << balance << "\tEnter to continue...\n";
		getline(cin,cont);				//empty variable to allow user to get the experience 
										//of rolling the coins
		quarter.toss();
		dime.toss();
		nickel.toss();
	}

	
	if (balance == 1.00)
		cout << "You win!\n\n";
	else
		cout <<"You lose!\n\n";

	
	return 0;
}