/*This simple calculator uses switch statements to perform operations
on two numbers input by the user*/

#include <iostream>
using namespace std;

double firstNumber = 0;
double secondNumber = 0;
int operation = 0;

void Sum() {
	double sum = firstNumber + secondNumber;
	cout << firstNumber << " + " << secondNumber << " = " << sum << endl;
}

void Minus() {
	double minus = firstNumber + secondNumber;
	cout << firstNumber << " - " << secondNumber << " = " << minus << endl;
}

void Product() {
	double product = firstNumber * secondNumber;
	cout << firstNumber << " x " << secondNumber << " = " << product << endl;
}

void Division() {
	double division = firstNumber / secondNumber;
	cout << firstNumber << " / " << secondNumber << " = " << division << endl;
}

int main() {
	cout << "Welcome to this simple calculator!\n";
	cout << "Please enter the first number: ";
	cin >> firstNumber;
	cout << "Now enter the second number: ";
	cin >> secondNumber;

	cout << "What operation do you want to perform?\n"; 
	cout << "Press 1 to add(+)\n Press 2 to substract(-)\n Press 3 to divide(/) \n Press 4 to multiply (x)\n";
	cin >> operation;


	operation;
	switch (operation) {
	case 1:
		Sum();
		break;

	case 2:
		Minus();
		break;
	case 3: 
		Division();
		break;
	case 4:
		Product();
		break;
	default: 
		cout << "You have selected an invalid operation!\n";
	} 


	return 0;
}


