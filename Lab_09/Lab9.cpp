#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int num = 0;
	int numEvens = 0;
	int numOdds = 0;
	char repeat = ' ';
	
	do {
	
		cout << "Enter an integer: ";
		cin >> num;
		
		if (num % 2 == 0) {
		
			numEvens++;
			cout << num << " is even." << endl << endl;	
		}
		else {
			
			numOdds++;
			cout << num << " is odd." << endl << endl;		
		}
		
		cout << "Do you wish to enter another integer? (Y/N): ";
		cin >> repeat;
		cout << endl << endl;
		
	} while (repeat == 'y' || repeat == 'Y');
	
	cout << "You entered " << numEvens << " even number(s)." << endl;
	cout << "You entered " << numOdds << " odd number(s)." << endl;
	
}
