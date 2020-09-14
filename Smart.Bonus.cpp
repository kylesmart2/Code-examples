// This is a program that plays a game call sparc, which is similar to the game of craps
// Kyle Smart 03/26/2017

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Die 			//die class
{
	private:
		int value; 		//value of die roll

	public:
		Die() 			//constructor
		{
			unsigned seed = time(0);
			srand(seed);
			roll();
		}
		void roll() 		//mutator roll function
		{
			const int MIN = 1;
			const int sides = 6;
			value = (rand() % (sides - MIN + 1)) + MIN;
		}
		int getValue() const 		//getting value of roll
		{return value;}
};

bool playGame(); 					//game play function

int main()
{
	
	char choice;
	int total = 0, win = 0, loss = 0; 		//variables

	cout << "Would you like to play a game of sparc? (y/n): ";
	cin >> choice;

	while (toupper(choice) == 'Y') 		//initiate game play
	{
		if (playGame())
		{
			win += 1;					//adding 1 to amount of wins
			cout << "Play again? (y/n): ";
			cin >> choice;
		}
		else
		{
			loss += 1;					//adding 1 to amount of losses
			cout << "Play again? (y/n): ";
			cin >> choice;
		}
	}

	cout << "Wins: " << win << " Losses: " << loss << endl;		//printing wins and losses
	return 0;

}

bool playGame()					//defining game play function
{
	int roll, sparc, play = 0, die = 0, die3 = 0;
	Die die1, die2; 		//two instances of die class

	die1.roll();			//rolls first die
	die2.roll();
	die = die1.getValue(); 	//assigning value of die roll to int variable
	die3 = die2.getValue();	//assigning value of die roll to int variable

	roll = die + die3;		//adding both values for a total of both dice

	if ((roll == 6) || (roll == 7))		//determining if first roll was a winner
	{
		cout << "You rolled: " << roll << endl;
		cout << "You win! \n";
		return true; 					//stops function, returns to main with true outcome
	}
	else if ((roll == 2) || (roll == 12))  	//determining if first roll was a loser
	{
		cout << "You rolled: " << roll << endl;
		cout << "You lost! \n";
		return false;					//stops function, returns to main with false outcome
	}
	else								//continue game play
		cout << "You rolled: " << roll << endl;
		cout << "The sparc is now: " << roll;
		cin.ignore();					//pause game to allow user to hit enter to roll dice
		play = sparc = roll;
		
	while ((play != sparc) || (play != 6) || (play != 7)) //loop once sparc is established
	{
		
		die1.roll();		//rolling first die
		die2.roll();		//rolling second die
		die = die1.getValue();		//assinging variable first die value
		die3 = die2.getValue();		//assigning variable second die value
		cin.ignore();				//pausing game for user to press enter

		play = die + die3;
		cout << "You rolled: " << play;		//printing value of roll
		
		
		if (play == sparc)					//determining if player won the round
		{	
			cout << "\nWinner winner! \n";
			cout << "You rolled the sparc, continue playing! \n";
			return true;					//returns to main program with true outcome
		}
		if ((play == 6) || (play == 7))		//determine if player lost the round
		{	
			cout << "\nYou lost! \n";
			return false;					//returns to main program with false outcome
		}

	}
	return 0;	
}



