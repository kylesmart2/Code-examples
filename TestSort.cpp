//******************************************************************||
//					Kyle Smart		CS250                          	||
//			||
//			   	||
//						||
//																	||
//									02//27/2018						||

#include <iostream>
#include "selectionSort.h"
using namespace std;

#define N 6


int main()
{
	int n = 7, i;
	int array[N] = {37, 23, 61, 74, 85, 13};
	
	selectionSort(n, array);

	for (i = 0; i < N; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b \n";

	return 0; 
}