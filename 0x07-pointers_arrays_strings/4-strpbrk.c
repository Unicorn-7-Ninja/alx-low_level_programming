#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string
* @accept: string
* Return: pointer or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
