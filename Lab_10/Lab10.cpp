#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	int num = 0;
	
	cout << setw(5) << "";
	
	for (int top = 0; top < 9; top++) {
	
		cout << setw(5) << (top + 1);	
	}
	
	cout << endl;
	
	for (int topBorder = 0; topBorder < 53; topBorder++) {
	
		cout << "-";
	}
	
	cout << endl;
	cout << "  1 |";
	
	for (int row1 = 0; row1 < 9; row1++) {
	
		cout << setw(5) << (row1 + 1);
	}

	cout << endl;
	cout << "  2 |";
	
	for (int row2 = 0; row2 < 9; row2++) {
		
		num += 2;
		
		cout << setw(5) << num; 
	}
	
	num = 0;
	cout << endl;
	cout << "  3 |";
	
	for (int row2 = 0; row2 < 9; row2++) {
		
		num += 3;
		
		cout << setw(5) << num; 
	}		
	
	num = 0;
	cout << endl;
	cout << "  4 |";
	
	for (int row2 = 0; row2 < 9; row2++) {
		
		num += 4;
		
		cout << setw(5) << num; 
	}			
	
}
