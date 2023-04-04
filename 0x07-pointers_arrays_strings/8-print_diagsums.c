#include "main.h"
/**
* print_diagsums - do thing
* @a: int
* @size: int
* Return: nothin'
*/
void print_diagsums(int *a, int size)
{
	int i, res1 = 0, res2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		res1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		res2 += a[i];
	}
	printf("%i, %i\n", res1, res2);
}
