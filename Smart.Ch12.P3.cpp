// This program reads from two different files in order to tell a joke. 
// Kyle Smart 5/3/2017
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define N 2000

string getJoke();
string getPunch();

int main()
{
	getJoke();
	getPunch();


	return 0;
}
string getJoke()
{
	string input;
	fstream joke;

	joke.open("joke.txt", ios::in);

	if (joke)
	{
		getline(joke, input);
		while (joke)
		{
			cout << input << endl;
			getline(joke, input);
		}

		joke.close();
	}

	else
	{
		cout << "Error opening file!\n";
	}
	return 0;

}
string getPunch()
{
	string *input, array[20];
	fstream punch;
	int count = 0;

	punch.open("punchline.txt", ios::in);

	if (punch)
	{
		getline(joke, input);
		while (joke)
		{	
			array[count] = &input;
			getline(joke, input);
			count++
		}

		cout << array[0] << endl;
	}
	else
	{
		cout << "Error opening file!\n";
	}

	punch.close();

	return 0;
}


