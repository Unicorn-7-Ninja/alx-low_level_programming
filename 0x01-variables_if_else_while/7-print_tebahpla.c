#include <stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
