/*This program explores the NOT(!) and AND (&&) operators in an "if-else" scenario */

#include <iostream>
using namespace std;

int main()
{
	cout << "Use boolean values (0 / 1) to answer: " << endl;
	
	cout << "Is it snowing? ";
	bool isSnowing = false;
	cin >> isSnowing;

	cout << "Are you at home right now? ";
	bool atHome = false;
	cin >> atHome;

	//Conditional statement uses logical AND and NOT wrapped in IF statements
	if (isSnowing && !atHome) 
	{
		cout << "Ouch! Find some shade and wait out the snow.\n";
	}
	if (!isSnowing && !atHome)
	{
		cout << "It's a clear day and you're out and about! Enjoy your walk.\n";
	}
	if (isSnowing && atHome) {
		cout << "Amazing. Have some coffee.\n";
	}
	if ((!isSnowing) && atHome) {
		cout << "Enjoy the sunny day!\n";
	}

	return 0;
}