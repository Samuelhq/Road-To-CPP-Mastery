/*Simple program to verify if you are allowed in the club or not*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Welcome To DaClub" << endl;
	string userName;
	cout << "What is your name: ";
	getline(cin, userName);

	cout << "How old are you? ";
	int userAge = 0;
	cin >> userAge;

	cout << "Hello " << userName << ",\nDo you have a ticket?\nYes (1) or No (0) ";
	bool hasTicket = false;
	cin >> hasTicket;

	cout << "Is your ticket a VIP ticket?\nYes (1) or No (0) ";
	bool isVIP = false;
	cin >> isVIP;

	if (userAge >= 18 && (hasTicket || isVIP)) {
		cout << "Welcome to Daclub, " << userName << endl;
	}
	else {
		cout << "ACCESS DENIED";
	}


	return 0;
}