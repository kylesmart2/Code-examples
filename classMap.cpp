/* ************************************************
*  Based on big10mascots.cpp, but modified to do a 
*  map of course suffix and number to corresponding
*  course name. 
*                   By: Kyle Smart      4/12/2018
*  ************************************************ */


#include <iostream> 			// cin, cout, ...
#include <map> 				// map<T1, T2>, ...
#include <string> 			// string

using namespace std;

int main() {
map<string, string> classes; 		// build the map
classes["CS 250"] 	= 	"Data Structures and Algorithms";
classes["MATH 206"] 	= 	"Analytic Geometry and Calculus I";
classes["MATH 207"] 	= 	"Analytic Geopmetry and Calculus II";
classes["MATH 205"] 	= 	"Discrete Mathematics";
classes["MATH 222"] 	= 	"Elementary Statistics for Math and Natural Sciences";
classes["MATH 307"]		= 	"Linear Algebra";
classes["CS 101"] 	= 	"Programming Fundamentals";
classes["CS 102"] 	= 	"The Object-Oriented Paradigm";
classes["CS 230"] = 	"Database Management Systems";
classes["CS 240"] 	= 	"Data Communications and Networking";
classes["CS 210"] 	= 	"Fundamentals of Operating Systems";
classes["CS 311"] 	= 	"Object-Oriented Programming";
classes["CS 310"] 	= 	"Computer Architecture and Assembly Language";
classes["CS 336"] 	= 	"Scripting Languages";
classes["CS 309"] 	= 	"Software Engineering";
classes["CS 405"] 	= 	"Algorithms";
classes["CS 335"] 	= 	"Introduction to Systems Analysis";
classes["CS 408"] 	= 	"Senior Seminar";
classes["CS 410"] 	= 	"Systems Administration";

while(true) 				// loop:
{
    cout << "\nTo look up a class name, enter the subject prefix"
         << "\nfollowed by a space and then the number ('q' to quit): ";

    string name;

    getline(cin, name); 		// get a name
    if(name == "q") break; 	// quit
// look up the name
    map<string, string>::iterator it = classes.find(name);
    
    if(it != classes.end()) 		// if found, then display 
       cout << "\n\t" << name << " is " << it->second << ".\n"; 
    else
        cout << "\n\t Is " << name << " a Computer Science or Mathematics class?"
             << "\n\t\t (Make sure suffix is all caps!)"
             << "\n\t\t     i.e. CS 250 ; MATH 207\n\n";
  }
  return 0;
}