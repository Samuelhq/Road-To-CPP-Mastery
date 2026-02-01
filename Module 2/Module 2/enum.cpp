/*Here I explore enumeration as a way to allow a variable to 
accept only a certain set of values (page 127)*/

#include <iostream>
using namespace std;

enum CardinalDirections 
{
	North = 34, South, East, West 
};

int main() {
	cout << "Displaying directions and their symbolic values.\n";
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	CardinalDirections WindDirections = West;
	cout << "Wind direction (West): " << West << endl;
	return 0;
}
	