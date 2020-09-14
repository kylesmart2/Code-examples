//This program creates a class called TestScores and then an object called myScores
//that will store three test scores and then return the average of the scores.
//Kyle Smart 3/1/2017
#include <iostream>
using namespace std;

class TestScores		//Creating the TestScores class
{						//all functions will be defined inline

	private:			//private variables (test scores)
		float grade1;
		float grade2;
		float grade3;
	public:				//public variables and functions
		TestScores()	//constructor so the private variables will always have a value
		{
			grade1 = 0.0;
			grade2 = 0.0;
			grade3 = 0.0;
		};
		//mutator functions
		void setGrade1(float score)		//function that sets value of private variable grade1
			{ grade1 = score;}
		void setGrade2(float score)		//function that sets value of private variable grade2
			{ grade2 = score;}
		void setGrade3(float score)		//function that sets value of private variable grade3
			{ grade3 = score;}
		float getGrade1() const 		//function that returns the value of grade1
			{ return grade1;}
		float getGrade2() const 		//function that returns the value of grade2
			{ return grade2;}
		float getGrade3() const 		//function that returns the value of grade 3
			{return grade3;}

		float getAverage() const 		//fuction to calculate average of all three scores
			{ return (grade1 + grade2 +grade3) / 3;}
};

int main()
{
	float grade;
	int count = 0;
	TestScores myScores;


	while (count < 3)		//while loop to get test scores. I like to have fun.
	{
		cout << "Please enter a test grade: ";
		cin >> grade;

		if (count == 0)
		{	myScores.setGrade1(grade);
			count++;}
		else if (count == 1)
		{	myScores.setGrade2(grade);
			count++;}
		else if (count == 2)
		{	myScores.setGrade3(grade);
			count++;}

	}

	cout << "The average test score is: " << myScores.getAverage() << endl;

	//cout << "Test 1: " << myScores.getGrade1() << endl;        //Testing to ensure properly
	//cout << "Test 2: " << myScores.getGrade2() << endl;		 //working functions
	//cout << "Test 3: " << myScores.getGrade3() << endl;
	
	return 0;
}