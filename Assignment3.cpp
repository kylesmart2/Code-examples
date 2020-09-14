//******************************************************************||
//						Kyle Smart		CS250                      	||
//		This program asks the user for input, which is pushed into  ||
//		a stack, and is then checked by using a queue to see if the	||
//		if the input is a palindrome. 								||
//								02//22/2018							||
#include <iostream>
#include "charStack.h"
#include "charQueue.h"
using namespace std;


int main()
{
	Stack myStack;
	Queue myQueue;
	int  count = 0, yes = 0, a = 1, b;
	char ch;

	//do
	//{
		cout << "\n\t\t (Enter to quit)\n";
		cout << "Please enter a word to determine if it is a palindrome: ";
		cin.get(ch);

		if (ch == '\n')
		{
			b = 2;
		}
		else 
		{
			while (a == 1)              //automating user input reading one character at a time
	    	{
	            myStack.push(ch);   	//putting character into stack
	            myQueue.enqueue(ch); 	//putting character into queue
	          
	            count++;           		//counting to make sure program doesn't go beyond input
		 		cin.get(ch);
		 		if (ch == '\n')         //stops loop once it reaches a new line
		        {
		            a = 2;
		        }
	    	}
	    }

	    for (int i = 0; i < count; i++)
	    {
	    	if (myStack.pop() == myQueue.dequeue())
	    	{
	    		yes += 1;
	    	}
	    	
	    }

	    if (yes == count)
	    {
	    	cout << "That word is a palindrome.\n";
	    }
	    else
	    {
	    	cout << "That word is not a palindrome.\n";
	    }

	    count = 0;

	//} while (b != 2);


	return 0;
}
