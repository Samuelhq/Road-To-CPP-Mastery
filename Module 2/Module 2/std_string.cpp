/*Using std string to store and manipulate user input*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string firstString ("Hello, welcome to string manipulation!\nReply in sentences...");
	cout << firstString << endl;

	cout << "What is your name: ";
	string nameLine;
	getline(cin, nameLine);

	cout << "\nWhat is your comfort food: ";
	string foodLine;
	getline(cin, foodLine);

	cout << "\nDo you prefer cats or dogs: ";
	string petLine;
	getline(cin, petLine);

	//here is the concatenation
	cout << "\nLet me tell you something: " << endl;
	string concatLine = nameLine + ", " + foodLine + " and " + petLine;

	cout << concatLine;





	return 0;
}