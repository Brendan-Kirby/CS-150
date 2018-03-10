//Author  : Brendan Kirby
//Course  : CS 150
//Date    : 2/16/2018
//HW	  : 1
//Project : 1

#include <iostream>

using namespace std;

int main() {
	
	char response;
	
	cout << "Are you taking a class? (Y/N): ";
	cin >> response;
	cout << endl;
	
	if (response == 'y' || response == 'Y') {
	
		cout << "Enter your letter grade for the class: ";
		cin >> response;
		cout << endl;
		
		switch (response) {
		
			case 'A':
			case 'a':
			case 'B':
			case 'b':
				cout << "Great job!" << endl;
				break;
			case 'C':
			case 'c':
				cout << "You're doing alright." << endl;
				break;
			case 'D':
			case 'd':
			case 'F':
			case 'f':
				cout << "You can improve." << endl;
				break;
			default:
				cout << "Invalid grade." << endl;	
		}
	}
	else if (response == 'n' || response == 'N') {
	
		cout << "Thanks for using the system." << endl;	
	}
	else {
	
		cout << "Invalid input." << endl;	
	}
	
	return 0;	
}
