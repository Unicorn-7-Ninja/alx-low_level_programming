#include "main.h"
/**
* str_concat - do thing
* @s1: str
* @s2: str
* Return: concated str
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cat)
	{
		j = 0;
		i = 0;
		while (i < len1)
			cat[j++] = s1[i++];
		i = 0;
		while (i < len2)
			cat[j++] = s2[i++];
		cat[j] = '\0';
		return (cat);
	}
	else
	{
		return (NULL);
	}
}
