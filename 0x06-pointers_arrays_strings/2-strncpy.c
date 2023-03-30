#include "main.h"
/**
* _strncpy - do thing
* @dest: dest
* @src: src
* @n: n
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; (int) i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; (int) i < n; i++)
		dest[i] = '\0';
	return (dest);
}

