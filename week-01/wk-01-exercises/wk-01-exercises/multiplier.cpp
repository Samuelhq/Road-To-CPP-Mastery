/*Simply multiplication program to learn about functions and variables*/
#include <iostream>
using namespace std;

void MultiplyNumbers()
{
	cout << "Enter the first number: ";
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number: ";
	int secondNumber = 0;
	cin >> secondNumber;

	//Multiply two numbers, store in a new variable
	int product = firstNumber * secondNumber;

	//Display result
	cout << firstNumber << "x" << secondNumber << " = " << product;
}

int main() {
	cout << "This program multiplies two numbers\n";

	MultiplyNumbers();

	return 0;
}