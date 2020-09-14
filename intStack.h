//******************************************************************||
//					Kyle Smart		CS250                          	||
//		This header defines a stack class to be used rather than	||
//		the C++ standard stack definition. It defines functions	   	||
//		like pop, peek, push, isEmpty, and delContents.				||
//																	||
//									02//15/2018						||

#ifndef _charStack
#define _charStack



#define MAX 1000
 
class Stack   {             //class to create stack
    int data[MAX];
    int top;
public:
    Stack() {               //constructor
        top = 0;
    }
    void push(char ch)      //push character into stack function
    {
        if (top == MAX)     //verifying not pushing beyond stack size
        {
            std::cout << "Stack is full\n";
            return;
        }
        data[top] = ch;     //putting data into stack
        top++;
    }
    int pop()              //popping char from stack to print out
    {
        if (top == 0)       //verifying stack isn't empty
        {
            std::cout << "Stack is empty\n";
            return 0;
        }
        top--;
        return data[top];
    }
    int peek()
    {
    	int tmp;
    	int temptop;
    	temptop = top-1;
    	tmp = data[temptop];
    	std::cout << tmp << std::endl;
    	return 0;
    	
    }
    int delContents()
    {
        if (top == 0)
        {
            std::cout << "Stack is empty\n";
            return 0;
        }
        top = 0;
        return 0;
        
    }
    bool isEmpty()
    {
    	if (top == 0)
    	{
    		std::cout << "Stack is empty\n";
    		return true;
    	}
    	else
    	{
    		return false;
    	}
    }
};


#endif
