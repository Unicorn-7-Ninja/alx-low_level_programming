#include "main.h"
/**
* _strstr - finds the first occurrence of the
*       substring needle in the string haystack
* @haystack: string
* @needle: string
* Return: a pointer to the beginning of the located substring
*       or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack, *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++, n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
