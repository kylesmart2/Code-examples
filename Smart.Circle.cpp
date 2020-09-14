//This program prompts the user to enter the radius of a circle
//Kyle Smart
#include <iostream>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		void setRadius(double);
		double getRadius() const;
		double getArea() const;
		double getCircum() const;
};
void Circle::setRadius(double r)	//assigns value to radius member
{
	radius = r;
}

double Circle::getRadius() const	//returns the value in the radius member
{
	return radius;
}

double Circle::getArea() const		//returns the area of the circle
{
	return (3.14)*(radius*radius);
}

double Circle::getCircum() const	//returns the circumference of the circle
{
	return 2 * 3.14 * radius;
}
int main()
{
	double rad;
	Circle circle;
	cout << "Please enter the radius of your circle: ";
	cin >> rad;
	circle.setRadius(rad);
	

	cout << "The radius of your circle is " << circle.getRadius() << endl;
	cout << "The area of your circle is: " << circle.getArea() << endl;
	cout << "The circumference of your circle is: " << circle.getCircum() << endl;

	return 0;
}


