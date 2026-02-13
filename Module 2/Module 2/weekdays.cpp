/*This program uses arrays for weekdays and prints the day of 
the week based on the user's input*/

#include <iostream>
using namespace std;

int main() {
	string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout <<  "Welcome to the Weekday Selector.\nWhich day of the week would you like to select?\nUse num 1-7: ";

	int weekDay = 0;
	cin >> weekDay;

	/*We can also optimize the swicth statement to be:*/
	
	switch (weekDay) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		// If it's 1-7, we do the math once here
		cout << "You have selected " << days[weekDay - 1] << "." << endl;
		break;

	default:
		cout << "Error: " << weekDay << " is not a valid day of the week." << endl;
		break;
	}

	return 0;
}