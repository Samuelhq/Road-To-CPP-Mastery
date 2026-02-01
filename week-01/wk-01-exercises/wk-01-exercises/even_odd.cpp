/*This program explores the use of modulo as an operator*/

#include <iostream>
using namespace std;


int main() {
	int userNum = 0;

	cout << "Is your favorite number even or odd?\nEnter now to find out: ";
	cin >> userNum;

	if (userNum % 2 == 0) {
		cout << "Your number " << userNum << " is even.\n";
	}
	else if (userNum % 2 != 0) {
		cout << "Your number " << userNum << " is odd.\n";
	}
}