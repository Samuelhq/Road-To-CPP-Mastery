/*Simple program to calculate the area of a circle and
the circumference using const pi = 3.142 to see what happens 
when I try to reassign a different value to pi*/

#include <iostream>
using namespace std;

int main() {
	const double pi = 3.141592653589;
	double radius = 0;
	
	cout << "Enter radius: ";
	cin >> radius;

	//double pi = 22.0 / 3; 

	double circleArea = pi * radius * radius;
	double circleCircumference = 2 * pi * radius;

	cout << "Area of your circle = " << circleArea << "sq cm.\n";
	cout << "Circumference of your circle = " << circleCircumference << "cm.\n";

	return 0;
}