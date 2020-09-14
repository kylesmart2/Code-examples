#include <iostream>
#include <cstdlib>
using namespace std;

void percolate(int n, int a[], int i){
	int j = i, k = i;
	while (true)
	
		if ((j > 0) && a[(j-1)/2] < a[k])
		{
			k = ((j-1)/2);
			swap(a[j], a[k]);
			j = k;
		}
		else
		{
			break;
		}
	return;
	
}

void settle(int n, int a[], int i){
	int j = i, k = i;
	while (true)
	{
		if ((2*j+1 < n) && a[2*j+1] > a[k])
		{
			k = 2*j + 1;
		}
		if ((2*j + 2 < n) && a[2*j + 2] > a[k])
		{
			k = 2*j + 2;
		}
		if (k != j)
		{
			swap(a[j], a[k]);
		}
		else
		{
			break;
		}
	}
	return;
}

void heapSort(int a[], int n){
	int j, i;

	j = ((n-1)/2);

	for (i = j; i <= 0; i--)
		settle(n, a[n-1], i);

	for (i = n; i <= 1; i--)
		swap(a[0], a[i + 1]);
		settle(i, a[i-1], 0);

}

void intArrayPrint(int a[],int length, string type){
   int i;
   cout << "\n" << type << " array is:\n\t[ ";
   for(i=0; i < length; i++){
	cout << a[i] << ", ";
   }
   cout << "\b\b ].\n";
}

int main(int argc, char **argv)
{  
   int length=0, i=0, ans=0;
   int *a=NULL, *b=NULL;
   if(argc > 1){
   	length=atoi(argv[1]);}
Start:
   if(length==0){
	cout<< "What length array do you want? \t";
	cin >> length;
    }
   a= new int[length];
   b= new int[length];
   cout << "\n\nYour array has length " << length <<"\n";

   cout<<"Type (integer) entries, one per line, as prompted.\n"; 

   for(i=0; i < length; i++){
	cout << "\nThe index " << i << " entry is: ";
	cin >> a[i];
   }


/* ------------------------------------------------
*  Code below will call various sorting algorithms, 
*  (when uncommented!!) and then print out the sorted 
*  array.  Create options to select at least 
*  bubbleSort, insertionSort and selectionSort. 
----------------------------------------------- */

   cout << "Please enter 1 for heapSort: ";
   cin >> ans;

   if (ans == 1)
   {
      //bubbleSort
      // Make a copy of the array to sort
      for(i=0; i < length; i++){b[i]=a[i];}
         intArrayPrint(a, length, "Input");
         heapSort(b,length);
         intArrayPrint(b, length, "Bubble sorted");

   } 

   ans = 0;

   delete [] a;
   delete [] b;
   a=NULL;
   b=NULL;
   length=0;

   cout << "Want another array? (1=yes, 0=No)\t";
   cin >> ans;
   if(ans) {goto Start;}
   return 0;

}