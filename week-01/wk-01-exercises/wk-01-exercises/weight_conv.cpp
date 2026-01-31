/*Enter wight in kg and get pounds equivalent and vice versa*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int kgWeight;
	int lbWeight;
	int option;
	
	cout << "Convert between kilogram and pounds.\n What would you like to do next?\n";
	cout << "[Press 1]: Kg to Lbs\n[Press 2]: Lbs to Kg\n";

	cin >> option;

	if (option == 1)
	{
		cout << "Enter weight in kilogram: ";
		cin >> kgWeight;

		if (cin.fail())
		{
			cout << "Error: You entered a decimal or invalid text. This program requires a whole number (int)." << endl;
			return 1; // Exit the program early
		}

		double result = kgWeight * 2.204623;

		cout << "The weight is = " << setprecision(3) << static_cast<double>(result) << " lbs.\n";
	}
	else if (option == 2)
	{
		cout << "Enter weight in pounds: ";
		cin >> lbWeight;

		if (cin.fail())
		{
			cout << "Error: You entered a decimal or invalid text. This program requires a whole number (int)." << endl;
			return 1; // Exit the program early
		}

		double result = static_cast<double>(lbWeight) / 2.204623;

		cout << "The weight is = " << setprecision(3) << static_cast<double>(result) << " kg.\n";
	} 
	else if (option != 1 && option != 2)
	{
		cout << "You have entered an invalid input. Please try again.";
	} 

	return 0;
}