#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream fout;
	string input;
	
	cout << "Enter a sentence to be stored in a file: ";
	getline(cin, input);
	
	fout.open("sentence.txt");
	
	fout << input;
	
	fout.close();
	
}
