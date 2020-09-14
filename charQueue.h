//******************************************************************||
//					Kyle Smart		CS250                          	||
//		This header defines a queue class.                      	||
//			   	                                                    ||
//					                                                ||
//																	||
//						02//22/2018         						||

#ifndef _charQueue
#define _charQueue

#define MAX 1000


class Queue
{
    char a[MAX];
    int front, rear;
   
public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(char x)
    {
        if ((rear + 1)%MAX == front)
        {
            std::cout << "Queue is full\n";
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear+1)%MAX;
        }

        a[rear] = x;
    }

    char dequeue()
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty\n";
            return 0;
        }
        else if (front == rear)
        {
            rear = front = -1;
            return 0;
        }
        else 
        {
            front = (front+1)%MAX;
            return a[front];
        }
    }

    bool isEmpty()
    {
        return (front == 0 && rear == 0);
    }

};

#endif