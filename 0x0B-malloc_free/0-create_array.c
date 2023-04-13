#include "main.h"
/**
* create_array - creates an array of chars, and
*	initializes it with a specific char.
* @size: size
* @c: char
* Return: array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(size);
	if (array)
	{
		while (i < size)
		{
			array[i++] = c;
		}
	return (array);
	}
	else
	{
		return (NULL);
	}
}
