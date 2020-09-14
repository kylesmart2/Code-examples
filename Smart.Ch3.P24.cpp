//This program is essentially a mad libs program inserting bits of data 
//about the user into a story
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//I believe string works easiest for all data
	string name, age, city, college, profession, animal, pname;

	//Prompt user to enter information
	cout << "Please enter your name: ";
	getline(cin,name);
	cout << "Please enter your age: ";
	getline(cin,age);
	cout << "Please enter your city: ";
	getline(cin,city);
	cout << "Please enter your college: ";
	getline(cin,college);
	cout << "Please enter your profession: ";
	getline(cin,profession);
	cout << "Please enter a type of animal: ";
	getline(cin,animal);
	cout << "Please enter a pet's name: ";
	getline(cin,pname);

	//Put user's inputs into the story
	cout << "There once was a person name " << name << " who lived in " << city << "." ;
	cout << " At the age of "<< endl << age << ", " << name << " went to college at "<< college;
	cout << ". " << name << " graduated and went to " << endl<< "work as a(n) " << profession;
	cout << ". " << "Then, " << name << " adopted a(n) " << animal << " named " << pname << ".";
	cout << "They " << endl << "both lived happily ever after!" << endl;

	return 0;
}