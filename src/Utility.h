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

typedef unsigned char	uint8;  /**< An unsigned 8bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned short	uint16; /**< An unsigned 16bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned int	uint32; /**< An unsigned 32bit integer. This is hower not entierly true depending on the computer. */
typedef unsigned long 	uint64; /**< An unsigned 64bit integer. This is hower not entierly true depending on the computer. */

#include <iostream>
namespace deq {
	/**
	* Pauses and lets the user continue on will.
	*/
	DEQ_API void pause() { std::cout << "Press enter to continue..." << std::endl; std::cin.get(); }
}