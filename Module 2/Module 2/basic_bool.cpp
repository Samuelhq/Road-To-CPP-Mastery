#include <iostream>
using namespace std;

int main()
{
	int personAge = 20;
	bool checkEquality = (personAge == 20); // true
	bool checkInequality = (personAge != 100); // true
	bool checkEqualityAgain = (personAge == 200); // false
	bool checkInequalityAgain = (personAge != 20); // false

	cout << checkEquality << endl;
	cout << checkInequality << endl;
	cout << checkEqualityAgain << endl;
	cout << checkInequalityAgain << endl;
	return 0;
}
