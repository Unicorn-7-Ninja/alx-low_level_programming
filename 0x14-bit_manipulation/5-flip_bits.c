#include "main.h"

/*
 * Flip_bits - Returns the num of bits u would need to flip to get from one num to another
 *
 * 
 * Always Return : num of bits u would need to flip
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
