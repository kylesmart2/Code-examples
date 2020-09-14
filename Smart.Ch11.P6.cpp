//This program stores data about a soccor player such as their name, number,
//and their score in a structure.
//Kyle Smart 2/20/2017
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct Soccer
{
	string name;
	int number;
	int points;
};

int main()
{
	const int NUM = 3;
	Soccer soccerlist[NUM];
	int i, count = 0, total = 0;
	char answer;
	int number = 0, tempnum;
	string name;

	while (count < NUM)
	{
		cout << "Please enter the player name: ";
		getline(cin, soccerlist[count].name);

		cout << "Please enter that player's number: ";
		cin >> soccerlist[count].number;

		if (soccerlist[count].number < 0)
		{	cout << "Invalid input! Please enter a valid number: ";
			cin >> soccerlist[count].number;
		}

		cout << "Please enter points scored by the player: ";
		cin >> soccerlist[count].points;

		if (soccerlist[count].points < 0)
		{	cout << "Invalid input! Please enter a valid number: ";
			cin >> soccerlist[count].points;
		}

		cin.ignore();
		count++;
	}

	//Setup for table
	cout << left << setprecision(20);
	cout << "Name \t\t\t"		"Number \t\t"		"Points \n";
	//Printing table
	for (i = 0; i < NUM; i++)
		cout << left << setw(20)<< soccerlist[i].name << "\t" << soccerlist[i].number << "\t\t" << soccerlist[i].points <<endl;

	//Getting the total points scored by team
	for (i = 0; i < NUM; i++)
		total += soccerlist[i].points;

	//Prints total points scored
	cout << "Total points scored by team: " << total << endl;

	//Top player score
	tempnum = soccerlist[0].points;
	for (i = 0; i < NUM -1; i++)
	{	
		if (soccerlist[i].points > soccerlist[i+1].points)
		{	if (soccerlist[i].points >= tempnum)
			{	number = soccerlist[i].number;
				name = soccerlist[i].name;
				tempnum = soccerlist[i].points; //new temporary number to compare against
				
			}
		}
	}
	// Printing top scorer
	cout << "The player with the most points is #" << number << " "<< name << "." <<endl;

	return 0;
}