/* Write a single C++ statement or line that accomplishes each of the following:
a. Print the message "Enter two numbers".
b. Input two integer values from the keyboard into integer variables b and c.
c. Assign the product of variables b and c to variable a.
d. Print the value of variable a. */

#include <iostream>

int main()
{
	std::cout << "Enter two numbers" << std::endl;
	int b = 1;
	int c = 1;
	int a = b + c;
	std::cout << "The value of a is " << a << std::endl;
	return 0;
}
