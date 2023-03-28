#include "main.h"
#include <string.h>
/**
*puts_half - puts half of a string
*@str: string to print
*/
void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 == 0)
	{
		len = len / 2;
	}
	else
	{
		len = (len + 1) / 2;
	}

	while (str[len] != '\0')
	{
		_putchar(str[len++]);
	}
	_putchar('\n');
}
