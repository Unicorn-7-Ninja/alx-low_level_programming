#include "function_pointers.h"
/**
 * int_index - do thing
 * @array: array
 * @size: array size
 * @cmp: function
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
