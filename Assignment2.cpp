//******************************************************************||
//					Kyle Smart		CS250                          	||
//		This program reads in a users input one character at a time	||
//		and pushes it into a stack. Stack is then popped out to    	||
//		reverse the order of the users input.						||
//																	||
//									02//15/2018						||

#include <iostream>
#include "charStack.h"
using namespace std;

int main()
{
    Stack myStack;              //my stack
    int count = 0, i = 0, a = 1;        //declaring variables
    int option = 0;
    char ch;

    cout << "Please enter a word or sentence to see it reversed: "; //asking for user input

    while (a == 1)              //automating user input reading one character at a time
    {
        cin.get(ch);
        if (ch == '\n')         //stops loop once it reaches a new line
        {
            a=2;
        }
        else
            {
                myStack.push(ch);   //putting character into stack
                count++;}           //counting to make sure program doesn't go beyond input
    }
    while (option != 3)
    {
    	cout << "Would you like to peek the top character or empty the list? (Enter 1 for peek; 2 to empty; 3 to resume: ";
   		cin >> option;
    	if (option == 1)
   		{
    		myStack.peek();
    	} 
    	if (option == 2)
   		{
    		myStack.delContents();
        	cout << "Stack has been emptied.\n";
        }

       		
        	
        
   	}

    for (i = 0; i < count; i++)     //loop to print user input backward
        cout << myStack.pop();

    cout << endl;


}