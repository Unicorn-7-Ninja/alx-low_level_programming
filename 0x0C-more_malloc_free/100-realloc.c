#include "main.h"
/**
* _realloc - do thing
* @ptr: ptr
* @old_size: int
* @new_size: int
* Return: nuthin
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);

	if (ptr)
	{
		unsigned int i;
		for (i = 0; i < old_size && i < new_size; i++)
			nptr[i] = ((char *)ptr)[i];
			free(ptr);
	}

	return (nptr);
}
