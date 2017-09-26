#pragma once

#include "Utility.h"

namespace deq
{
	/**
	* \brief Factorial of x (eg: factorial(3) = 3 * 2 * 1)
	*
	* \param x The variable of which to calculate the factorial from
	*/
	DEQ_API BigInt factorial(BigInt x);

	/**
	* \brief Returns the amount of permutations of n total objects along k spots where order matters
	*
	* \param n The total amount of objects
	* \param k The total amount of spots to arrange along
	*/
	DEQ_API BigInt permuationsOrdered(BigInt n, BigInt k);

	/**
	* \brief Returns the amount of permutations of n total objects along k spots where order is of no significance and repetition is not allowed.
	*
	* \param n The total amount of objects
	* \param k The total amount of spot to arrange along
	*/
	DEQ_API BigInt permutationsUnordered(BigInt n, BigInt k);
}