/*In dynamic arrays, it is possible to change an existing item in the array
or to append a new one...*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> dynArray(3);
	dynArray[0] = 123;
	dynArray[1] = 456;
	dynArray[2] = 789;

	cout << "Number of items in this array: " << dynArray.size() << endl;
	cout << "This array contains: " << dynArray[0] << ", " << dynArray[1] << ", " << dynArray[2] << endl;

	cout << "Enter number to insert into array: \n";
	int newValue = 0;

	cin >> newValue;
	dynArray.push_back(newValue);
	cout << "Number of elements (updated): " << dynArray.size() << endl;
	cout << "The last element in the array: " << dynArray[dynArray.size() - 1] << endl;
	cout << "Updated array: " << dynArray[0] << ", " << dynArray[1] << ", " << dynArray[2] << ", " << dynArray[3] << endl;
	return 0;

}