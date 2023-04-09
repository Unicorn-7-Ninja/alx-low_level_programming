#include "main.h"
#include <string.h>
/**
* _atoi - convert a string to an integer.
* @s: string
* Return: integer value or 0.
*/
int _atoi(char *s)
{
	int i;
	double  res = 0;
	char sign = '+';

	if (strlen(s) <= 0)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && sign != '-')
		{
			sign = '-';
		}
		else if (s[i] == '-' && sign == '-')
		{
			sign = '+';
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
	}
	if (sign == '-')
		res = -res;
return (res);
}
