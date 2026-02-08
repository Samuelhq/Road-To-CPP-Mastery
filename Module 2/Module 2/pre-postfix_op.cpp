//Here you see how the difference between pre and profix incremental and decremental operators
//What do you notice about the behavior of the operators? How many times did numA change?

#include <iostream>
using namespace std;

int main() {
	int numA = 99;
	int numB = numA++;
	int numC = ++numA;
	int numD = numA--;
	int numE = --numA;

	cout << "numA = " << numA << endl;
	cout << "numB = " << numB << endl;
	cout << "numC = " << numC << endl;
	cout << "numD = " << numD << endl;
	cout << "numE = " << numE << endl;

	return 0;
}