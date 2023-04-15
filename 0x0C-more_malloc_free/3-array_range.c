#include "main.h"
/**
* array_range - do thing
* @min: int
* @max: int
* Return: int
*/
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	p = malloc(range * sizeof(int));

	if (!p)
		return (NULL);

	for (i = 0; i < range; i++)
		*(p + i) = min + i;

	return (p);
}
