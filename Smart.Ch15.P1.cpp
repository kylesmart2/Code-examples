//This program shows the use of a base class and derived class. There is an Employee class
// and derived prodcution worker class to show funcitonality of both classes
//Kyle Smart 4/10/2017
#include <iostream>
using namespace std;

class Employee 				//Employee class
{
private:
	string empName; 		//Employee name
	int empNumber; 			//Employee number
	string hireDate; 		//Employee hire date
public:
	Employee() 				//default constructor
	{
		empName = "";
		empNumber = 0;
		hireDate = "01/01/99";}
	Employee(string name, int number, string date) 	//constructor
	{
		empName = name;
		empNumber = number;
		hireDate = date;
	}
	void setempName(string name) 	//Employee name mutator function
	{   empName = name;   }
	void setempNumber(int number) 	//Employee number mutator function
	{   empNumber = number;  }
	void sethireDate(string date) 	//Employee hire date mutator function
	{   hireDate = date;   }
	string getName() const 			//Employee name accessor function
	{   return empName;   }
	int getNumber() const 			//Employee number accessor function
	{   return empNumber;   }
	string gethireDate() const 		//Employee hire date accessor function
	{   return hireDate;   }
};

class ProductionWorker : public Employee 	//Production worker class derived from Employee base class
{
private:
	int shift; 						//Production worker shift
	double hourlyPayRate;			//Produciton worker pay rate
public:
	ProductionWorker() 				//default constructor
	{   shift = 1;
		hourlyPayRate = 10.50;	}
	ProductionWorker(int shiftt, double pay) //constructor
	{	shift = shiftt;
		hourlyPayRate = pay; }
	void setShift(int shiftt) 		//Production worker shift mutator function
	{   shift = shiftt; }
	void setPay(double pay) 		//Production worker pay mutator function
	{	hourlyPayRate = pay; }
	int getshift() const 			//Production worker shift accessor function
	{	return shift;  }
	int getPay() const 				//Production worker pay accessor function
	{	return hourlyPayRate; }

};

int main()
{
	string name, date;    			//variables for object
	int number, shiftt;
	double pay;

	ProductionWorker casino;		//Production worker object declaration

	cout << "Please enter the employee name: ";
	getline(cin, name); 			//getting employee name
	casino.setempName(name); 		//calling function

	cout << "Please enter the employee's number: ";
	cin >> number;					//getting employee number
	casino.setempNumber(number);	//callling function
	cin.ignore();					//getting rid of new line

	cout << "Please enter the emplyee's hire date (00/00/0000): ";
	getline(cin, date); 			//getting hire date
	casino.sethireDate(date);		//calling function

	cout << "Please enter the employee's shift (1 = dayshift , 2 = nightshift): ";
	cin >> shiftt; 					//getting shift
	casino.setShift(shiftt); 		//calling function

	cout << "Please enter the hourly pay rate for the employee: $";
	cin >> pay; 					//getting pay rate
	casino.setPay(pay);				//calling function

	//Printing out all information from object to show everything is functioning properly

	cout << "Name\t\t" << "Number\t" << "Hire Date \t" << "Shift \t" << "Pay Rate" << endl;
	cout << casino.getName() << "\t" << casino.getNumber() << "\t" << casino.gethireDate();
	cout << "\t" << casino.getshift() << "\t" << casino.getPay() << endl;

	return 0;


}




