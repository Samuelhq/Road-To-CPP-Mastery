/*Exploring the use of 'consteval' & 'constexpre' in calculating 
different vaues of pi*/

#include <iostream>
using namespace std;

consteval double GetPi() { return 22.0 / 7; }
constexpr double xPi (int x) { return x * GetPi() ;}

int main() {
	constexpr double pi = GetPi();

	cout << "constexpr pi evaluated by the machine to " << pi << endl;
	cout << "constexpr xPi evaluated by the machine to " << xPi(2) << endl;

	int multiple = 5; 
	cout << "(non-const) integer multiple = " << multiple << endl;
	cout << "constexpr is ignored when XPi(multiple) is invoked, ";
	cout << "returns " << xPi(multiple) << endl;

	return 0;
}


