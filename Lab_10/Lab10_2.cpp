#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	cout << setw(5) << "";
	
	for (int i = 0; i < 9; i++) {
	
		cout << setw(5) << (i + 1);	
	}
		
	cout << endl;
	
	for (int i = 0; i < 53; i++) {
	
		cout << "-";
	}
	
	cout << endl;
		
	for (int i = 0; i < 9; i++) {
	
		cout << "  " << (i+1) << " |";
		
		for (int j = 0; j < 9; j++) {
			
			cout << setw(5) << ((j + 1) * (i + 1));
		}
		
		cout << endl;		
	}
		
}
	

