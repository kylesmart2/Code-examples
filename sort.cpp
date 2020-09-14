/* ----------------------------------------------
*  C++ source code to input of an array of integers 
*  via keyboard after first prompting for the 
*  length of the array. The array is then copied 
*  and sorted using various algorithms (sorting 
*  code must be added to complete this program).
---------------------------------------------- */ 

/* ----------------------------------------------
*  Source provided by Dr. Baker for CS250
*  Edited and added sort functions by Kyle Smart
*              3/9/2018
----------------------------------------------- */

#include <iostream>
#include <cstdlib>
using namespace std;
 
// Method to print an integer array to stdout. 
// Includes a string to label what is printed.

void intArrayPrint(int a[],int length, string type){
   int i;
   cout << "\n" << type << " array is:\n\t[ ";
   for(i=0; i < length; i++){
	cout << a[i] << ", ";
   }
   cout << "\b\b ].\n";
}

// Insertion sort method 

void insertionSort(int a[],int length){
// insert code here for this method
   int val, j;
   for (int i = 0; i < length; i++)
   {  val = a[i];
      j = i - 1;
      while ((j >= 0) && (a[j] > val))
      {
         a[j + 1] = a[j];
         j = j - 1;
      }
      a[j+1] = val;
   }
}

// Selection sort method 

void selectionSort(int a[],int length){
   int min, temp, i, j;

   for (i = 0; i < length - 1; i++)
   {
      min = i;
      for (j = i + 1; j < length; j++)
      {
         if (a[j] < a[min])
         { 
            min = j; 
         }
      }
      
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
// insert code here for this method
}

// Bubble sort method 

void bubbleSort(int a[],int length){

   bool swap;     
   int temp;      

   do
   {
      swap = false;
      for (int i = 0; i < (length - 1); i++)
      {
         if (a[i] > a[i + 1])
         {
            temp = a[i];
            a[i] = a[i + 1];
            a[i +1] = temp;
            swap = true;
         }
      }
   } while (swap);
}

// Whatever sort method you wish to add

void scoreSort(int a[],int length){
   
   int score[length], S[length], i, j;

   for (i = 0; i < length; i++)
   {
      score[i] = 0;
      S[i] = 0;
   }
   for (i = 0; i < length - 1; i++)
   {
      for (j = i +1; j < length; j++)
      {
         if (a[i] < a[j])
         {
            score[j] = score[j] + 1;
         }
         else 
         {
            score[i] = score[i] + 1;
         }
      }
   }
   for (i = 0; i <length; i++)
   {
      S[score[i]] = a[i];
      cout << S[i] << ", ";
   }
      cout << "\n";

   for (i = 0; i < length; i++)
   {
      a[i] = S[i];
   }
}



/*---------------------------------------------------------------------
*
* Program for integer array input. Later we can
* add code to sort the array in place using ...
*
---------------------------------------------------------------------*/

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

   cout << "Please enter 1 for bubbleSort, 2 = insertionSort, 3 = selectionSort, and 4 = scoreSort: ";
   cin >> ans;

   if (ans == 1)
   {
      //bubbleSort
      // Make a copy of the array to sort
      for(i=0; i < length; i++){b[i]=a[i];}
         intArrayPrint(a, length, "Input");
         bubbleSort(b,length);
         intArrayPrint(b, length, "Bubble sorted");

   }
   if (ans == 2)
   {
      //insertionSort
      // Make a copy of the array to sort
      for(i=0; i < length; i++){b[i]=a[i];}
         intArrayPrint(a, length, "Input");
         insertionSort(b,length);
         intArrayPrint(b, length, "Insertion sorted");
   }
   if (ans == 3)
   {
      //selectionSort
      // Make a copy of the array to sort
      for(i=0; i < length; i++){b[i]=a[i];}
         intArrayPrint(a, length, "Input");
         selectionSort(b,length);
         intArrayPrint(b, length, "Selection sorted");
   }
   if (ans == 4)
   {
      // Make a copy of the array to sort
      for(i=0; i < length; i++){b[i]=a[i];}
         intArrayPrint(a, length, "Input");
         scoreSort(b,length);
         intArrayPrint(b, length, "Score sorted");
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
