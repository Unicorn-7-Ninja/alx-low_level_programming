#include "main.h"
/**
 * cap_string - do thing
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1; /* capitalize next character */

		while (str[i] != '\0')
	{
		if (cap_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		 str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		 str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		 str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		 str[i] == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		i++;
	}
	return (str);
}
