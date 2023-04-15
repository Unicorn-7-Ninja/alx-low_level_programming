#include "main.h"
/**
* malloc_checked - allocates memory using malloc.
* @b: int
* Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc((double) b);
	if (result != NULL)
	{
		return (result);
	}
	else
	{
		exit(98);
	}
}
