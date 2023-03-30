#include "main.h"
/**
* _strncat - concatenates two strings.
* @dest: string to append to.
* @src: strting from which to append.
* @n: number of elements
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0';)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
