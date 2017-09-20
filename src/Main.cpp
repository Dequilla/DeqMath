#include <DeqMath.h>

#include <iostream>

/*
* This is just an example of what you can use DeqMath for.
*/

int main(int argc, char** argv)
{
	std::cout << "Welcome! These are some of the example functions of this library: " << std::endl;
	std::cout << "Factorial of 5 = " << deq::factorial(5) << std::endl;

	deq::pause();

	return 0;
}