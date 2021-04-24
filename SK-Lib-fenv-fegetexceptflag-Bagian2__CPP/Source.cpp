// C++ program to illustrate
// fegetexceptflag() function

#include <iostream>
#include <cfenv>
#include <conio.h>

using namespace std;

int main() {
	// bitmask value
	fexcept_t excepts;

	// raised exception
	feraiseexcept(FE_ALL_EXCEPT);

	// current state is saved
	fegetexceptflag(&excepts, FE_ALL_EXCEPT);
	cout << "Exception raised -> \n";

	// print the exception occurred
	if (fetestexcept(FE_ALL_EXCEPT)) {
		if (fetestexcept(FE_DIVBYZERO)) {
			cout << "FE_DIVBYZERO \n";
		}
			
		if (fetestexcept(FE_INEXACT)) {
			cout << "FE_INEXACT \n";
		}
			
		if (fetestexcept(FE_INVALID)) {
			cout << "FE_INVALID \n";
		}
			
		if (fetestexcept(FE_OVERFLOW)) {
			cout << "FE_OVERFLOW \n";
		}
			
		if (fetestexcept(FE_UNDERFLOW)) {
			cout << "FE_UNDERFLOW \n";
		}
			
		if (fetestexcept(FE_ALL_EXCEPT)) {
			cout << "FE_ALL_EXCEPT \n";
		}
			
	} else {
		cout << "None";
	}
		
	_getch();
	return 0;
}
