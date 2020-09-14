//******************************************************************||
//					Kyle Smart		CS250                          	||
//		This program reads in a users input one character at a time	||
//		and pushes it into a stack. Stack is then popped out to    	||
//		reverse the order of the users input.						||
//																	||
//									02//15/2018						||

#ifndef _SLLclass
#define _SLLclass

struct node
{
	int numerator;
	int denominator;
	node *next;
};

class list
{
private:
	node *head, *tail;
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}
	void printAll();
	void insertNode(node *ptr, int a, int b);
};

void list::printAll(){
	node *p = head;

	if (p == NULL)
	{
		std::cout << "EMPTY" << std::endl;
		return;
	}

	if (p->next == NULL)
	{
		std::cout << p->numerator << "/" << p->denominator << std::endl;
	}
	else
	{
		do
		{
			std::cout << p->numerator << "/" << p->denominator << ", ";
			p = p->next;
		}
		while (p != NULL);
		std::cout << "\b\b " << std::endl;
	}
}

void list::insertNode(node *ptr, int a, int b){
	node *tmp1 = new node;
	
	tmp->numerator = a;
	tmp->denominator = b;
	tmp->next = tail;
}

#endif

