#include "main.h"
#include <string.h>
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: string to reverse
*/
void print_rev(char *s)
{
	int c = strlen(s) - 1;

	while (c >= 0)
	{
		_putchar(s[c--]);
	}
	_putchar('\n');
}
