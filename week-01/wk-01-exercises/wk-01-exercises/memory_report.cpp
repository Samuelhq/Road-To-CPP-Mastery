/*using sizeof(), I query the size of different variables and 
print them in the console*/

#include <iostream>
using namespace std;


int main() {
	int bits = 8;
	cout << "Computing the size of inbuilt variable types.\n";

	cout << "Size of bool: " << sizeof(bool) << " bytes (" << sizeof(bool) * bits << " bits)" << endl;
	cout << "Size of char: " << sizeof(char) << " bytes (" << sizeof(char) * bits << " bits)" << endl;
	cout << "Size of unsigned short int: " << sizeof(unsigned short) << " bytes (" << sizeof(unsigned short) * bits << " bits)" << endl;
	cout << "Size of short int: " << sizeof(short) << " bytes (" << sizeof(short) * bits << " bits)" << endl;
	cout << "Size of unsigned long int: " << sizeof(unsigned long) << " bytes (" << sizeof(unsigned long) * bits << " bits)" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes (" << sizeof(long) * bits << " bits)" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes (" << sizeof(int) * bits << " bits)" << endl;
	cout << "Size of uns. long long: " << sizeof(unsigned long long) << " bytes (" << sizeof(unsigned long long) * bits << " bits)" << endl;
	cout << "Size of long: " << sizeof(long long) << " bytes (" << sizeof(long long) * bits << " bits)" << endl;
	cout << "Size of flaot: " << sizeof(float) << " bytes (" << sizeof(float) * bits << " bits)" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes (" << sizeof(double) * bits << " bits)" << endl;

	cout << "The output changes with compiler, hardware and OS" << endl;

	return 0;
}