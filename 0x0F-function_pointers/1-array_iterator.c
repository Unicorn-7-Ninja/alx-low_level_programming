#include "function_pointers.h"
/**
 * array_iterator - do thing
 * @array: array
 * @size: array size
 * @action: function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && action)
	while (i < (int) size)
		action(array[i++]);
}
