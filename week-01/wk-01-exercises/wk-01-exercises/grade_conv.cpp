/*This simple propgram tells the user their grade using simple
if else statements*/

#include <iostream>
using namespace std;

int main() {
	int score;
	char grade;

	cout << "This program tells you your grade when you enter your score \n";
	cout << "Please enter your score: ";
	cin >> score;

	if (score >= 80 && score <= 100) {
		grade = 'A';
	}
	else if (score >= 70 && score <= 79) {
		grade = 'B';
	}
	else if (score >= 60 && score <= 69) {
		grade = 'C';
	}
	else if (score >= 50 && score <= 59) {
		grade = 'D';
	}
	else if (score >= 0 && score <= 49) {
		grade = 'F';
	}
	else {
		grade = '?';
		cout << "You have entered an invalid score, please try again.\n";
		return main();
	}

	cout << "Your Grade is: " << grade << endl;

	return 0;
}