#include "Combinatorics.h"

deq::BigInt deq::factorial(BigInt x)
{
	if (x > 1)
		return x * deq::factorial(x - 1);
	else
		return 1;
}

deq::BigInt deq::permuationsOrdered(BigInt n, BigInt k)
{
	return deq::factorial(n) / deq::factorial(n - k);
}

deq::BigInt deq::permutationsUnordered(BigInt n, BigInt k)
{
	return deq::factorial(n) / (deq::factorial(n - k) * deq::factorial(k));
}