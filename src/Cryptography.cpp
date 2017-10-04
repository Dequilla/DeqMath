#include "Cryptography.h"	

deq::BigInt deq::RSA(deq::BigInt block, deq::BigInt key, deq::BigInt mod)
{
	return deq::pow(block, key) % mod;
}