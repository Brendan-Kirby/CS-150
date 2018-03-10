/*
Name	 : Brendan Kirby
Course	 : CS 150 - C++ I
HW		 : 02
Project  : 1

Algorithm:

	Open write stream to target file
	
	DO
		Read user input for height of triangle
		
		IF input is between bounds THEN
			- input is valid
			- draw triangle
		ELSE 
			- input is not valid
			- print error message 
		END IF	
	WHILE input is not valid
	
	Close write stream to target file		
		
	Print confirmation that write was completed			 	
*/

#include <iostream>
#include <fstream>

int main() {
	
	//declaration & initialization
	int height = 0;
	int doubleHeight = 0;
	bool isNotValid = true;
	std::string fileName = "Triangle.txt";
	std::ofstream fout;
	
	//open filestream to write file
	fout.open(fileName.c_str());
		
	//error checking input for lower and upper bounds	
	do {
		
		//input
		std::cout << "Enter an integer between 1 and 50 as the height of your triangle: ";
		std::cin >> height;
		std::cout << "\n";		
	
		if (height > 0 && height < 51) {
	
			isNotValid = false;
			std::cout << "Writing triangle of height " << height << " to file " << fileName << ". . .";
			std::cout << "\n";
						
			doubleHeight = height * 2;
			
			//drawing first half of triangle, up to and including the central, tallest
			//line of length equal to the user supplied value of height			
			for (int i = 0; i <= height; i++) { 
			
				for (int j = 0; j < i; j++) {
				
					fout << "*";	
				}
				
				fout << "\n";	
			}
			
			//drawing the second half of triangle, beginning at one row past the
			//center and continuing down the slope to zero
			for (int i = (height - 1); i > 0; i--) { 
					
				for (int j = i; j > 0; j--) {
				
					fout << "*";	
				}
				
				fout << "\n";		
			}			
		}
		else { //input was not between 1 and 50 (inclusive)
			
			isNotValid = true;
			std::cout << "Integer out of bounds, try again.\n\n";
		}
				
	} while (isNotValid);
	
	//close filestream to write file
	fout.close();
	
	//confirm write completion
	std::cout << "\nDone writing to " << fileName << ".\n\n";
	
	system("PAUSE");
	
	return 0;	
}
