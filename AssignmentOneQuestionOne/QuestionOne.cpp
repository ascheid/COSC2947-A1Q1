#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;


/*
Alvaro Scheid 09/29/2017
Object-Oriented Programming C++ - Algoma University
COSC2947 :: Assignment number 1
Descp: Write a program that inputs three integers from the keyboard and,
Prints the Sum, Avarage, Product, Smallest and Largest of these number.
*/



int main()
{
	int number1{ 0 };
	int number2{ 0 };
	int number3{ 0 };

	system("CLS");

	cout << "Please input three different integers numbers:	";
	cin >> number1 >> number2 >> number3;

	int sum = number1 + number2 + number3;

	cout << "The sum is: " << sum;
	cout << endl << "The avarage is: " << (sum / 3);
	cout << endl << "The product is: " << number1 * number2 * number3;

	int temp{ 0 };
	if (number2 < number3)
	{
		temp = number2;
		number2 = number3;
		number3 = temp;
	}
	if (number1 < number2)
	{
		temp = number1;
		number1 = number2;
		number2 = temp;
	}
	if (number2 < number3)
	{
		temp = number2;
		number2 = number3;
		number3 = temp;
	}

	cout << endl << "The smallest is: " << number3;
	cout << endl << "The largest is: " << number1;
	cout << endl;

	system("PAUSE");
	return 0;
}