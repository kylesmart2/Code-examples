//******************************************************************||
//					Kyle Smart		CS250                          	||
//		This header defines a stack class to be used rather than	||
//		the C++ standard stack definition. It defines functions	   	||
//		like pop, peek, push, isEmpty, and delContents.				||
//																	||
//									02//27/2018						||

#ifndef _selectionSort
#define _selectionSort

void selectionSort(int x, int array[])
{
	int min, temp, i, j;

	for (i = 0; i < x - 2; i++)
	{
		min = i;
		for (j = i + 1; j < x - 1; j++)
		{
			if (array[j] < array[min])
			{
				
				min = j;
				
			}
		}
		
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}

};


#endif