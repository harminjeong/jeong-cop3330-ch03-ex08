#include "std_lib_facilities.h"
int main()

{
	int val = 0;
	cout << "Enter an integer: ";
	cin >> val;
	if (!cin) error("Invalid input!");
	string res = "even";
	if (val%2) res = "odd";

	cout << "The value " << val << " is an " << res << " number.\n";

}
