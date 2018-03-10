/********************************************************
NAME          : Brendan Kirby
COURSE        : CS 150
LAST MODIFIED : 1/22/2018
*********************************************************
ALGORITHM:

	DECLARE num1, num2, sum, difference, product

	PROMPT "Enter an integer: "
	READ num1

	PROMPT "Enter another integer: "
	read num2

	CALC sum = num1 + num2
	CALC difference = num1 - num2
	CALC product = num1 * num2

	PRINT "num1 + num2 = " sum
	PRINT "num1 - num2 = " difference
	PRINT "num1 * num2 = " product
	
	PAUSE
	
	RETURN 0

********************************************************/


#include <iostream>

using namespace std;

int main()
{
	int num1, num2, sum, difference, product;
	
	cout << "Enter an integer: ";
	cin >> num1;
	cout << endl;

	cout << "Enter another integer: ";
	cin >> num2;
	cout << endl;
	
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	
	cout << num1 << " + " << num2 << " = " << sum << endl;
	cout << num1 << " - " << num2 << " = " << difference << endl;
	cout << num1 << " * " << num2 << " = " << product << endl << endl;	
	
	system("PAUSE");
	
	return 0;
}
