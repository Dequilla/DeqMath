#pragma once

#ifdef _WIN32
	#include <Windows.h>
	#define DEQ_API __declspec(dllexport)
#else
	#define DEQ_API
#endif

typedef char	int8;  /**< An 8bit integer. This is hower not entierly true depending on the computer. */
typedef short	int16; /**< An 16bit integer. This is hower not entierly true depending on the computer. */
typedef int		int32; /**< An 32bit integer. This is hower not entierly true depending on the computer. */
typedef long 	int64; /**< An 64bit integer. This is hower not entierly true depending on the computer. */
typedef long long intll; /**< An integer of type long long. */

typedef unsigned char	uint8;  /**< An unsigned 8bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned short	uint16; /**< An unsigned 16bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned int	uint32; /**< An unsigned 32bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned long 	uint64; /**< An unsigned 64bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned long long uintll; /**< An unsigned integer of type long long. */

#include <iostream>
#include "InfInt.h"
namespace deq {
	/**
	* \brief Pauses and lets the user continue on will.
	*/
	DEQ_API inline void pause() { std::cout << "Press enter to continue..." << std::endl; std::cin.get(); }

	DEQ_API typedef InfInt BigInt; /**< An arbitrarily big integer only limited by memory */
	
	/**
	* \brief x to the power of y using BigInts
	*
	* TODO: Implement more efficient powering method
	*/
	DEQ_API inline deq::BigInt pow(deq::BigInt x, deq::BigInt y)
	{
		if (y == 0)
			return 1;
		else 
		{ 
			deq::BigInt original = x;
			for (deq::BigInt i = 1; i < y; i++)
			{
				x *= original;
			}
		
			return x;
		}
	}

	/**
	* \brief Transforms a sequence of characters into their representetive character values and padds numbers too short
	* 
	* \param message The block of text to transform
	* \param characterLength How long each characters number should be(decides how many 0's to pad with)
	*/
	DEQ_API inline deq::BigInt stringToNumberSequence(std::string message, int characterLength = 3)
	{
		std::string sequence;
		for (auto &c : message)
		{
			int charAsInt = int(c);
			std::string intAsString = std::string(std::to_string(charAsInt));
			std::string endString;

			// If the string is too short, prepend appropriate amount of 0's
			for (int pos = 0; pos < characterLength - intAsString.length(); pos++)
			{
				endString.append("0");
			}
			endString.append(intAsString);
			sequence.append(endString);
		}


		return deq::BigInt(sequence);
	}
}