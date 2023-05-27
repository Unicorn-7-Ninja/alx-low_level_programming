#include "main.h"

#define MAX_BINARY_LENGTH 32
#define BINARY_ZERO '0'
#define BINARY_ONE '1'

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if b is NULL or contains invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b || strlen(b) > MAX_BINARY_LENGTH)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != BINARY_ZERO && b[i] != BINARY_ONE)
			return (0);
		dec_val = 2 * dec_val + (b[i] - BINARY_ZERO);
	}

	return (dec_val);
}
