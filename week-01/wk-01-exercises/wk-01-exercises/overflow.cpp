/*Here I explore the effects of sselecting the wrong
data type, using signed int vs unsigned int as an example*/

#include <iostream>
using namespace std;

int main() {
	unsigned short uShortValue = 65535;
	cout << "unsigned short 65535 + 1 == " << ++uShortValue << endl;

	short signedShort = 32767;
	cout << "signed short 32767 + 1 = " << ++signedShort << endl;

	return 0;
}