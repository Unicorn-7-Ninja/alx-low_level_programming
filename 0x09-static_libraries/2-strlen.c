#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: string
* Return: length in int
*/
int _strlen(char *s)
{
	int c = 0, i = 0;

	while (s[i++] != '\0')
	{
		c++;
	}
	return (c);
}
