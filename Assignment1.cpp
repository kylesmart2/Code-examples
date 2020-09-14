//******************************************************************||
//						Kyle Smart		CS250                      	||
//		This program asks the user for an integer to solve Fn Farey ||
//		seqence. The program is supposed to iterate from F1.		||
//								02//15/2018							||

#include <iostream>
#include "SLLclass.h"
using namespace std;


int main()
{
	

	int input;

	do
	{
		cout << "\t\t (Enter 123 to quit)" << endl;
		cout << "Please enter and integer to see it's Fn Farey sequence: ";
		cin >> input;

		list myList;
		node *head = new node;
		node *tail = new node;
		myList.insertNode(head, 0, 1);
		myList.insertNode(tail, 1, 1);
		head->next = tail;
		tail->next = NULL;
		head->numerator = 0;
		head->denominator = 1;
		tail->numerator = 1;
		tail->denominator = 1;
		// myList.insertNode(head,0,1);
		// myList.insertNode(tail,1,1);

		myList.printAll();

	} while (input != 123);

	

	// int input, tmp = 0, a = 0, b = 1, c = 1, d, k, p, q;
	// SLList myList, F1;
	// F1.addToHead(0,1);
	// F1.addToTail(1,1);
	

	// cout << "Please enter an integer to see it's Fn Farey sequence: ";
	// cin >> input;
	// tmp = input;
	// d = tmp;

	// if (input == 1)
	// {
	// 	F1.printAll();
	// 	return 0;
	// }
	// else
	// {	a = 0;
	// 	b = 1;
	// 	c = 1;
	// 	d = input;
	// 	myList.addToHead(F1.head->numerator, F1.head->denominator);
	// 	myList.addToTail(1,input);

	// 	do 
	// 	{
	// 		p = ((input + b)/d)*c-a;
	// 		q = ((input + b)/d)*d-b;

	// 		a = c;
	// 		b = d;
	// 		c = p;
	// 		d = q;

	// 		if (p > q)
	// 		{
	// 			break;
	// 		}
	// 		if (p == q)
	// 		{
	// 			break;
	// 		}
	// 		else 
	// 		{
	// 			myList.addToTail(p,q);
	// 			input--;
	// 		}
	// 	} while (p*d-b <= input);

	// 	q = q +1;
	// 	do
	// 	{
			
	// 		if (q >= tmp)
	// 		{
	// 			break;
	// 		}
	// 		else
	// 		{
	// 			myList.addToTail(p = p+1, q = q+1);
	// 		}
	// 	} while (q < tmp);

	// }


	// myList.addToTail(F1.tail->numerator, F1.tail->denominator);
	// myList.printAll();

	return 0;

}
