#include "main.h"
/**
* _strchr - locates a character in a string.
* @s: string
* @c: character
* Return: pointer or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (*s == c ? s : 0);
}
