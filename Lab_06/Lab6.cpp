#include <iostream>

using namespace std;

int main() {

	int numInput = 0;

	cout << "Enter an integer: ";
	cin >> numInput;
	
	switch (numInput) {
	
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		case 4:
			cout << "Four";
			break;
		case 5:
			cout << "Five";
			break;
		case 6:
			cout << "Six";
			break;
		case 7:
			cout << "Seven";
			break;
		case 8:
			cout << "Eight";
			break;
		case 9:
			cout << "Nine";
			break;
		case 10:
			cout << "Ten";
			break;
		default:
			cout << "Your number was not between 0 and 10.";
			break;
			
	}
	
}
