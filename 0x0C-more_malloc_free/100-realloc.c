#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 * Return: pointer to the new memory block, or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  unsigned int i;
  char *nptr, *p;

  if (new_size == old_size)
    return (ptr);

  if (ptr == NULL)
  {
    p = malloc(new_size);
    if (p == NULL)
      return (NULL);
    return (p);
  }

  if (new_size == 0 && ptr != NULL)
  {
    free(ptr);
    return (NULL);
  }

  nptr = malloc(new_size);
  if (nptr == NULL)
    return (NULL);

  for (i = 0; i < old_size && i < new_size; i++)
    nptr[i] = ((char *)ptr)[i];

  free(ptr);
  return (nptr);
}

