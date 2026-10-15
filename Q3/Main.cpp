/* Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the
two numbers. */

#include <iostream>
using namespace std;

int main()
{
	int number1 = 0;
	int number2 = 0;
	int sum = 0;
	int difference = 0;
	int product = 0;
	int quotient = 0;

	cout << "Enter first number: ";
	cin >> number1;

	cout << "Enter second number: ";
	cin >> number2;

	sum = number1 + number2;
	difference = number1 - number2;
	product = number1 * number2;
	quotient = number1 / number2;
	cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;
	cout << "The difference of " << number1 << " and " << number2 << " is " << difference << endl;
	cout << "The product of " << number1 << " and " << number2 << " is " << product << endl;
	cout << "The quotient of " << number1 << " and " << number2 << " is " << quotient << endl;	

	return 0;
}