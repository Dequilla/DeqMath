#pragma once

#include "DeqMath.h"

namespace deq
{
	/**
 	* \brief RSA is the encrypt and decrypt function of a block/message
	*/
	DEQ_API deq::BigInt RSA(deq::BigInt block, deq::BigInt key, deq::BigInt mod);
}