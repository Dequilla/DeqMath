#include <DeqMath.h>

#include <iostream>

/*
* This is just an example of what you can use DeqMath for.
*/

int main(int argc, char** argv)
{
	std::cout << "Welcome! These are some of the example functions of this library: " << std::endl;
	std::cout << "\n\nCombinatorics: " << std::endl;
	std::cout << "Factorial of 23 = " << deq::factorial(23) << std::endl;
	std::cout << "Ordered permutations of n:52 and k:5 -> " << deq::permuationsOrdered(52, 5) << std::endl;
	std::cout << "Unordered permutations of n:52 and k:5 -> " << deq::permutationsUnordered(52, 5) << std::endl;

	std::cout << "\n\nCrypto: " << std::endl;
	std::string message("1"); // TODO: Crypto works, just need proper modulo and keypair
	deq::BigInt blockOriginal = deq::stringToNumberSequence(message); // TODO: Reverse sequencing of number to string(Tips: Go from the back since all the way to the first character we know how many 0's where padded)
	std::cout << "Block original: " << blockOriginal << " Original message: " << message << std::endl;		  
	deq::BigInt blockEncrypted = deq::RSA(blockOriginal, 59, 91);
	std::cout << "Block encrypted: " << blockEncrypted << std::endl;
	std::cout << "Block decrypted: " << deq::RSA(blockEncrypted, 53, 91) << std::endl;

	deq::pause();

	return 0;
}