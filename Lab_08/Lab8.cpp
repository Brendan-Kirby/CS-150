#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int num = 0;
	int numOdds = 0;
	int numEvens = 0;
	
	
	while (num != -1) {
		
		cout << "Enter a positive integer (-1 to quit) : ";
		cin >> num;
		
		if (num > 0) {
				if (num % 2 == 0) {
				
					cout << num << " is even." << endl;
					numEvens++;
				}
				else {
				
					cout << num << " is odd." << endl;
					numOdds++;	
				}
		}
	}
	
	
	
	if (numEvens > 0 || numOdds > 0) {
		
		cout << endl << "You entered " << numEvens << " even numbers." << endl;
		cout << "You entered " << numOdds << " odd numbers." << endl;
	
	}
	else {
	
		cout << endl << "No numbers were entered." << endl;	
	}
	
	
}
