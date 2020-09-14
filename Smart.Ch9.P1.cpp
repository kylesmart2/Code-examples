//This program creates an array of user defined length and tells the user
//the address of the array. The array is then deleted at the end
//Kyle Smart 2/8/17

#include <iostream>
using namespace std;

void create_array(int num, int *myptr);		//Creating a dynamic array

int main()
{
	int number;
	int *intptr = nullptr;

	cout << "Please enter an integer for entries: ";
	cin >> number;

	//Creating the array using my defined funciton
	create_array(number, intptr);

	//Printing array address. Always remeber &
	cout << "The beginning address of the array is " << &intptr  << endl;

	delete [] intptr;		//deleting dynamic array

	return 0;
}
void create_array(int num, int *myptr)
{
	myptr = new int[num];
}