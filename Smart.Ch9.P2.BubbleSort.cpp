//This program makes a dynamic array to put test scores into. It then sorts
//the array using a bubblesort and calculates the average score
//Kyle Smart 2/13/17

#include <iostream>
using namespace std;

void create_array(int num, int *myptr);		//Create dynamic array function
void bubble_sort(int array[], int j);		//Bubble Sort function
void avg_score(int array[], int j);			//Average score function

int main()
{
	int numarray, count = 0, i, j, score = 0;
	int *ptr;

	cout << "Please enter the number of test scores: ";
	cin >> numarray;
	i = numarray;

	ptr = new int[numarray];

	while (count < i)	//Loop to receive input and test for negative entires
	{ 
		cout << "Please enter a test score: ";
		cin >> *(ptr + count);	//putting input into array using pointer notation
		//cout << count << endl;
		score = ptr[count];
		//cout << score << endl;
		if (score < 0)		//testing to be sure input isn't negative
		{	cout << "Invalid number! Please enter a non-negative integer." <<endl;
			count--;
		}
		count++;		
	}
	
	bubble_sort(ptr, i); 		//calling bubble sort function
	
	cout << "Sorted Test Scores: " << endl;

	for (j = 0; j < i; j++)
		cout << ptr[j] << endl;		//printing array with pointer notation

	avg_score(ptr, i);

	return 0;
}
void create_array(int test, int *myptr)
{
	myptr = new int[test];
}
void bubble_sort(int array[], int j)
{
	bool swap;		//This one stumped me for a while, luckily
	int temp;		//I found an example int the book.

	do
	{
		swap = false;
		for (int i = 0; i < (j-1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i +1] = temp;
				swap = true;
			}
		}
	} while (swap);
					
}
void avg_score(int array[], int j)  //Average function
{
	double total = 0;
	double average = 0;
	int i;

	for (i = 0; i < j; i++)		//adding all elements together
		total += array[i];
	average = total / j;		//getting the average score
	cout << "The average test score was " << average << endl;

}