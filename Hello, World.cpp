//Headers
//
#include "stdafx.h"
#include "../../std_lib_facilities.h"


int main() // Designated entry point initialize main. cannot be called recursively, additionaly address cannot be taken.
{
	cout << "Hello, World!\n"; // Character out. Prints Hello, World!
	keep_window_open(); //Holds the console window open until the user enters a character. (modifying of this further to instead use the enter key is planned.)
	return 0; // Return statement, terminates execution of code and returns control.
}
