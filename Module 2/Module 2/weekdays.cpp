/*This program uses arrays for weekdays and prints the day of 
the week based on the user's input*/

#include <iostream>
using namespace std;

int main() {
	string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout <<  "Welcome to the Weekday Selector.\nWhich day of the week would you like to select?\nUse num 1-7: ";

	int weekDay = 0;
	cin >> weekDay;

	weekDay;
	
	switch (weekDay) {
	case 1:
		cout << "You have selected " << days[0] << "." << endl;
		break;
	case 2:
		cout << "You have selected " << days[1] << "." << endl;
		break;
	case 3:
		cout << "You have selected " << days[2] << "." << endl;
		break;
	case 4:
		cout << "You have selected " << days[3] << "." << endl;
		break;
	case 5:
		cout << "You have selected " << days[4] << "." << endl;
		break;
	case 6:
		cout << "You have selected " << days[5] << "." << endl;
		break;
	case 7:
		cout << "You have selected " << days[6] << "." << endl;
		break;

	default:
		cout << "You have selected an invalid day of the week";

	}

	/*We can also optimize the swicth statement to be:
	
	switch (weekDay) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		// If it's 1-7, we do the math once here
		//cout << "You have selected " << days[weekDay - 1] << "." << endl;
		//break;

	default: // Fixed the typo here!
		cout << "Error: " << weekDay << " is not a valid day of the week." << endl;
		break;
	}*/

	return 0;
}