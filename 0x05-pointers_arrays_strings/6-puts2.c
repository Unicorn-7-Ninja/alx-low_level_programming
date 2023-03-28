#include "main.h"
#include <string.h>
/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: string to print from
*/
void puts2(char *str)
{
	int i, c = strlen(str);

	for (i = 0 ; i < c ; i++)
	{
		i % 2 == 0 ? _putchar(str[i]) : 0;
	}
	_putchar('\n');
}
