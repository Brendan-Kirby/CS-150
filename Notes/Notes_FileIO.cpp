#include <iostream> //access to cin, cout, string
#include <fstream> //access to ofstream and ifstream

using namespace std;

int main() {
/* file output

	ofstream fout; //creates output filestream object named fout
	string fileName;
	
	cout << "Enter a name for the file: ";
	cin >> fileName;
	
	fout.open(fileName.c_str()); //open stream to file
	
	fout << "Hello File!" << endl; //output to open file
	
	fout.close(); //close stream when finished working with that file
*/	
	ifstream fin; //creates input filestream object named fin
	
	fin.open("nums.txt"); //opens stream from file
	
	int x = 0;
	
	if (fin) { //if file is opened successfully
		
		while (fin >> x) { //tests if we've reached end of file, go into loop if not EOF
			
			fin >> x; //read from file, delimited by spaces and newlines for multiple data
		
			cout << "x is " << x << endl; 
		}
	
		fin.close(); //close stream 
	}
	else { //if file is not opened successfully
		
		cout << "failed to open file nums.txt";
	}
	
	return 0;
}
