#include "Combinatorics.h"

uint64 deq::factorial(uint64 x)
{
	if (x > 1)
		return x * deq::factorial(x - 1);
	else
		return 1;
}