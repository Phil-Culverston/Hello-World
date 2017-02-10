//Headers

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int main() // Designated entry point initialize main. cannot be called recursively, additionaly address cannot be taken.
{
	cout << "Hello, World!\n"; // Character out. Prints Hello, World!
		cout << "Please enter your first name (followed by 'enter'):\n";
		string first_name;	//first_name is a variable of type string.
		cin >> first_name;	//read characters into first_name.
		cout << "Hello, " << first_name << "!\n";
	keep_window_open(); //Waits for a character to be entered before exiting.
	return 0; // Return statement, terminates execution of code and returns control.
}
