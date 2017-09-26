#include <DeqMath.h>

#include <iostream>

/*
* This is just an example of what you can use DeqMath for.
*/

int main(int argc, char** argv)
{
	std::cout << "Welcome! These are some of the example functions of this library: " << std::endl;
	std::cout << "Factorial of 23 = " << deq::factorial(23) << std::endl;
	std::cout << "Ordered permutations of n:52 and k:5 -> " << deq::permuationsOrdered(52, 5) << std::endl;
	std::cout << "Unordered permutations of n:52 and k:5 -> " << deq::permutationsUnordered(52, 5) << std::endl;

	deq::pause();

	return 0;
}