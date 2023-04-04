#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: string
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	const char *p;
	const char *a;
	unsigned int count = 0;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
			count++;
			break;
			}
		}
		if (*a == '\0')
		{
		break;
		}
	}
	return (count);
}
