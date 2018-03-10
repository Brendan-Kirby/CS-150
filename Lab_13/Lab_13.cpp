#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string fileName;
	ifstream fin;
	int numToRead, sum;
	
	numToRead = 0;
	sum = 0;
	
	cout << "Enter the name of a file to be read: ";
	getline(cin, fileName);
	cout << endl;
	
	fin.open(fileName.c_str());
	
	if (fin) {
		
		while (fin >> numToRead) {

			sum += numToRead;
			cout << "Read " << numToRead << " from file." << endl;
		}
		
		cout << endl << "Total is " << sum << endl;
	}
	else {
	
		cout << "Failed to open file." << endl;	
	}
		
	fin.close();
}
