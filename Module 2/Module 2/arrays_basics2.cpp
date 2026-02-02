#include <iostream>
using namespace std;

constexpr int Square(int number) { return number * number; }

int main() {
	const int ARRAY_LENGTH = 5;
	int myNumbers[ARRAY_LENGTH] = { 5, 10, 15, 20, 25 };

	//Using constexpr for array of 5*5 
	int moreNumbers [Square(ARRAY_LENGTH)];

	cout << "Enter index of the element to be changed: ";
	int elementIndex = 0;
	cin >> elementIndex;

	cout << "Enter the new value: ";
	int newValue = 0;
	cin >> newValue;
	myNumbers[elementIndex] = newValue;
	moreNumbers[elementIndex] = newValue;

	cout << "Element: " << elementIndex << " in Array muNumbers is: " << myNumbers[elementIndex] << endl;
	cout << "Element: " << elementIndex << " in Array moreNumbers is: " << moreNumbers[elementIndex] << endl;


}