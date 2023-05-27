#include "main.h"

/**
 * print_binary - affiche equal binaire nombre décimal
 * @n: nombre à afficher en binaire
 */
void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	
	if (!count)
		_putchar('0');
}
