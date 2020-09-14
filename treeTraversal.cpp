// C++ Program to create a binary tree from input data

/**************************************************************
	Author: Professor R. D. Baker
	Web: math0.wvstateu.edu/~baker/cs250/spring16/sample_code.html
	Description: C++ Program to input a binary tree
***************************************************************/

/* ----------------------------------------------
*  Source provided by Dr. Baker for CS250
*  Edited by Kyle Smart
*              3/29/2018
----------------------------------------------- */

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<stack>
#include<queue>


using namespace std;

struct node  // Structure for nodes of the tree
{
   int data;
   bool visited;
   struct node *left;
   struct node *right;

   node() {
	left=NULL;
	right=NULL;
  }
};

struct node *root,*p,*q;

void inputTree() {   // Creating a binary tree from input data
   int dat;
   queue<node*> que;
   root=NULL;

/* Set up root node first, placing its pointer in queue */

   cout<<"\nEnter value for root node (negative to end):\t";
   cin >> dat; 
      if(dat>=0)
      {
      	p=new node();
      	p->data=dat;
      	p->visited = false;
      	root=p;
      	que.push(p);
      }


/* Now systematically add in children of nodes in the tree */

   while(!que.empty())
   {
      p=que.front();
      que.pop();
      cout << "\nEnter left child of "<< p->data << " (negative for empty):\t";
      cin >> dat;
      if(dat>=0) {
	     q=new node();
	     q->data=dat;
	     q->visited = false;
	     p->left=q;
	     que.push(q);}
	   else  {
	   	break;
	   }
      cout << "\nEnter right child of "<< p->data << " (negative for empty):\t";
      cin >> dat;
      if(dat>=0) {
	     q=new node();
	     q->data=dat;
	     q->visited = false;
	     p->right=q;
	     que.push(q);}
	  else   {
	  	break;
	  }
   }

   return;
}

// Routine to print output from outque. 

void printQueue(queue<node*> outque) {

   while(!outque.empty()) {
      cout << outque.front()->data <<", ";
      outque.pop();
      }
   cout << "\b\b .\n"; 
   return;
}


// Depth First Search(DFS) Traversal.

void DFS() {
	stack<node*> travStack;
	stack<node*> reset;
	queue<node*> que;
	travStack.push(root);
	reset.push(root);
	que.push(root);
	node *p = root;
	int i = 0;

	
	if (p != NULL)
	{		
		travStack.push(p);	
		while (!travStack.empty())
		{	
			p = travStack.top();		
			travStack.pop();				
			if ((p->left != NULL) && (p->visited == false))
			{
				travStack.push(p->left);
				que.push(p->left);
			}
			if ((p->right != NULL) && (p->visited == false))
			{
				travStack.push(p->right);
				que.push(p->right);
			}
			p->visited = true;
		}
	}
	while (!reset.empty())		//reseting bool visited to false
	{	
		p = reset.top();		
		reset.pop();				
		if ((p->left != NULL) && (p->visited == true))
		{
			reset.push(p->left);
		}

		if ((p->right != NULL) && (p->visited == true))
		{
			reset.push(p->right);
		}
		p->visited = false;
		
	}

/* We'll need to tract the top two pointers on the stack 
*  in order to execute proper backtracking as we enumerate 
*  nodes in DFS order. We use both p and q pointers. The 
*  values of these pointers can be recovered from the 
*  stack that indicates path from root to current node. 
*/

   printQueue(que);
   return;
}

// Breadth First Search(BFS) Traversal.

void BFS() {
	queue<node*> travQue;
	queue<node*> outque;
	queue<node*> reset;
	outque.push(root);
	travQue.push(root);
	reset.push(root);
	node *p = root;
	int i;

	if (p != NULL)
	{
		travQue.push(p);
		
		while (!travQue.empty())
		{
				p = travQue.front();
				travQue.pop();
		
				if ((p->left != NULL) && (p->visited == false))
				{	travQue.back();
					travQue.push(p->left);
					outque.push(p->left);					
				}
				if ((p->right != NULL) && (p->visited == false))
				{	
					travQue.back();
					travQue.push(p->right);
					outque.push(p->right);					
				}
				p->visited = true;
		}
	}
reset.push(p);
while (!reset.empty())				//reseting bool visited to false
		{
				p = reset.front();
				reset.pop();
		
				if ((p->left != NULL) && (p->visited == true))
				{	reset.back();
					reset.push(p->left);					
				}
				if ((p->right != NULL) && (p->visited == true))
				{	
					reset.back();
					reset.push(p->right);				
				}
				p->visited = false;
		}
/* We'll need to have both a processing queue and an 
*  output queue to make this be easy. 
*/

   printQueue(outque);
   return;
}

/************************************************************
 Driver program, with options for doing Depth First Search, 
Breadth First Search or terminating program. BFS should 
generate one of preorder, inorder or postorder traversal.
*************************************************************/

int main() 
{
   int choice;
   inputTree();

   while(true)
   {
      cout<<"\n\n-----------------------";
      cout<<"\n1: DFS\n2: BSF\n3: Exit\nEnter your choice: ";
      cin>>choice;
      switch(choice)
      {
	 case 1:
	    DFS();
	    break;
	 case 2:
	    BFS();
	    break;
	 case 3:
	    exit(0);
	    break;
	 default:
	    cout<<"\nIncorrect choice!\nRe-enter your choice.";
	    cin>>choice;
      }
   }
   return 0;
}

//---------------------- END--------------------
