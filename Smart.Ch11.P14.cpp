//This program simulates inventory bins in a warehouse using a structure.
//Kyle Smart 2/20/2017
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Warehouse
{												//structure definition 
	string part;
	int onhand;
};

void addParts(struct Warehouse[], int z); 		//adding parts to bin function
void removeParts(struct Warehouse[], int z);	//removing parts from bin function

int main()
{
	const int NUM = 10;		//defining array size and initilizing array with values
	Warehouse inventory[NUM] = {{"Valve", 10},{ "Bearing", 5},{ "Bushing", 15},{ "Coupling", 21},
								{"Flange", 7},{"Gear", 5},{"Gear Housing", 5},{"Vacuum Gripper", 25},
								{"Cable", 18},{"Rod", 12}};
	int i, partnum;
	char option, choice;

	//Printing the initialized structure array into a table. 
	cout << "Part Description \t" << "Number of Parts in the bin \n";

	for (i = 0; i < NUM; i++)
		cout << left << setw(20)<< inventory[i].part << "\t" << inventory[i].onhand <<endl;
	
	//Option for user to quit or edit a bin
	cout << "Would you like to quit or modify quantity? (q/m): ";
	cin.get(option);

	if (option == 'm')				//determine if user wants to quit or edit
		while (option != 'q')		//loop to edit bins
		{
			cout << "Which part would you like to change (1-10): ";
			cin >> partnum;

			partnum -= 1;		//changing the number to correspond the the correct part of the
								//array.
			
			cin.ignore();		//clearing to new line
			cout << "Would you like to add parts or remove them? (a/r): ";
			cin.get(choice);					//choice to add or remove from bin
			
			if (choice == 'a')
				addParts(inventory, partnum);		//sending to add function

			else
				removeParts(inventory, partnum);	//sending to remove function

			//Printing out new inventory
			cout << "Your new inventory: " << endl;
			cout << "Part Description \t" << "Number of Parts in the bin \n";
			for (i = 0; i < NUM; i++)
				cout << left << setw(20)<< inventory[i].part << "\t" << inventory[i].onhand <<endl;
			
			cin.ignore();					//clearing line to get next option

			//Asking if ready to quit, or keep going
			cout << "Would you like to quit or modify quantity? (q/m): ";
			cin.get(option);

		}


	return 0;
}
void addParts(Warehouse n[], int z)
{
	int m;
	cout << "How many parts would you like to add to the bin? ";
	cin >> m;

	if (m < 0)			//if statement to verify user input isn't negative
	{	cout << "Invalid input! Negative value not allowed!" << endl;
		cout << "Current amount: " << n[z].onhand << endl;
		cout << "Please enter the number of parts you would like to add: ";
		cin >> m;
	}
	while (n[z].onhand + m > 30)		//while loop to verify that the user doesn't input
	{									//a value that would make the total more than 30
										//and also isn't a negative number.
		cout << "Too many. Bin can't hold more than 30 entires." << endl;
		cout << "Current amount: " << n[z].onhand << endl;
		cout << "Please enter the number of parts you would like to add: ";
		cin >> m;

		if (m < 0)		//if statement to verify user input isn't negative
			cout << "Invalid input! Negative value not allowed!" << endl;
			cout << "Current amount: " << n[z].onhand << endl;
			cout << "Please enter the number of parts you would like to add: ";
			cin >> m;
	}
	n[z].onhand += m;		//adding user defined amount to parts on hand.

}
void removeParts(Warehouse n[], int z)
{
	int m;
	cout << "How many parts would you like to remove from the bin? ";
	cin >> m;

	if (m < 0)		//if statement to verify user input isn't negative
	{	cout << "Invalid input! Negative value not allowed!" << endl;
		cout << "Current amount: " << n[z].onhand << endl;
		cout << "Please enter the number of parts you would like to remove: ";
		cin >> m;
	}
	while (n[z].onhand - m < 0)		//while loop to verify that the user doesn't input
	{								//a value that would make the total less than 0
									//and also isn't a negative number.
		cout << "Invalid input! You can't remove more than the bin contains." << endl;
		cout << "Current amount: " << n[z].onhand << endl;
		cout << "Please enter the number of parts you would like to remove: ";
		cin >> m;

		if (m < 0)		//if statement to verify user input isn't negative
			cout << "Invalid input! Negative value not allowed!" << endl;
			cout << "Current amount: " << n[z].onhand << endl;
			cout << "Please enter the number of parts you would like to remove: ";
			cin >> m;
	}
	n[z].onhand -= m;		//removing user defined amount of parts on hand.

}















