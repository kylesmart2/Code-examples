// A C++ program to reverse the characters of keyboard input.
// 
#include <iostream>
#include "charStack.h"
using namespace std;
 
/*---------------------------------------------------------------------
* Program for backwards echo of stdin character stream.
*
* Reads a character stream from stdin and outputs the characters 
* in reversed order.
*
---------------------------------------------------------------------*/
int main()
{
   char ch;
   cStack cstk=cStack();

   cout<<"\t (Empty line terminates program)\n";
   cout<<"Type a character sequence to reverse.\n\n"; 

   while(true){
     cin.get(ch);
     if(ch == '\n') break;

     while(ch != '\n'){
	cstk.push(ch);
	cin.get(ch);
       }

   // Now let's spit the characters back out 

     while(!cstk.empty()) {
	cout<< cstk.pop();
       }
     cout<<"\n\nEnter another character sequence:\n\n"; 
   }
}
