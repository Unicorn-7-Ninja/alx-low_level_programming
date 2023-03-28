#include "main.h"
#include <string.h>
/**
* rev_string - reverses a string
* @s: string to reverse
*/
void rev_string(char *s)
{
	int i, j, c = strlen(s);
	char st[1000];

	for (i = 0, j = c - 1; i < c ;)
	{
		st[i++] = s[j--];
	}
	st[i] = '\0';
	i = st[i];
	strcpy(s, st);
}
