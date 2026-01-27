#include <iostream>

using namespace std;

int main() {
	string userName;
	int userAge;
	string userJob;
	string userInterest;


	cout << "Please enter your name:";
	cin >> userName;

	cout << "How old are you? ";
	cin >> userAge;

	cout << "What is your occupation? ";
	cin >> userJob;

	cout << "Are you interested in learning C++? [Answer Yes/No]: ";
	cin >> userInterest;

	if (userInterest == "Yes")
	{ 
		cout << "Welcome to C++, " << userName << ".\n";
		cout << "As a " << userAge << "year old " << userJob << ", I'm glad you're interested in C++!\n";
	}
	else if (userInterest == "No")
	{
		cout << "Hello, " << userName << ".\n" "It is sad to see you have no interest in C++.\n";
	}
		
	return 0;

}