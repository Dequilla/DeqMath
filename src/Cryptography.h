#pragma once

#include "DeqMath.h"

namespace deq
{
	/**
 	* \brief fsRSA is fermets simple(weak) crypto
	*/
	DEQ_API deq::BigInt RSA(deq::BigInt block, deq::BigInt key, deq::BigInt mod);
}