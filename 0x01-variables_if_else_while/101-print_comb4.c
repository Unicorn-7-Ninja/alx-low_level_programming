#include <stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/
int main(void)
{
	int h, a, b;

	for (h = 0; h < 10; h++)
	{
		for (a = h + 1; a < 10; a++)
		{
			for (b = a + 1; b < 10; b++)
			{
				putchar(h + '0');
				putchar(a + '0');
				putchar(b + '0');
				if (h < 7 || (h == 7 && a < 8) || (h == 8 && a < 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
