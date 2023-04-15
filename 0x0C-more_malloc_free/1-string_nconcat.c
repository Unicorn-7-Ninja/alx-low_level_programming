#include "main.h"
/**
* string_nconcat - do thing
* @s1: char
* @s2: char
*  @n: int
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *s;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s = malloc(sizeof(char) * (len1 + ((n < len2) ? n : len2) + 1));
	if (!s)
	return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; n < len2 && i < (len1 + n); i++, j++)
		s[i] = s2[j];

	for (; n >= len2 && i < (len1 + len2); i++, j++)
		s[i] = s2[j];

	s[i] = '\0';
	return (s);
}
