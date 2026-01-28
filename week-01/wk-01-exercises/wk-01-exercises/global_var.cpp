/*Using global variables, learning aboout shadowing and using functions*/

#include <iostream>
using namespace std;

int firstNumber = 0;
int secondNumber = 0;
int product = 0;

void MultiplyNumbers()
{
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	//Multiply two numbers, store in a new variable
	product = firstNumber * secondNumber;

	//Display result
	cout << "Displaying from function MultiplyNumbers(): \n";
	cout << firstNumber << " x " << secondNumber << " = " << product << endl;
}

int main() {
	cout << "This program multiplies two numbers.\n";

	MultiplyNumbers();

	cout << "Displaying from function main(): \n";
	cout << firstNumber << " x " << secondNumber << " = " << product;

	return 0;
}