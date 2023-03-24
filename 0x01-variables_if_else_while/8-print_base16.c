#include <stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/
int main(void)
{
	int i = '0';
	int h = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (h <= 'f')
	{
		putchar(h);
		h++;
	}

	putchar('\n');
	return (0);
}
