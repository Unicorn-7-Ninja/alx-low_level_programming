#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter
* @str: string
* Return: ptr
*/
char *_strdup(char *str)
{
	int i, len;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	new = malloc(sizeof(char) * (len + 1));

	if (new)
	{
		i = 0;
		while (i < len)
		{
			new[i] = str[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
