#include <stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			int c1 = a / 10;
			int c2 = a % 10;
			int c3 = b / 10;
			int c4 = b % 10;

			if (((c1 * 10) + c2) != ((c3 * 10) + c4))
			{
				putchar('0' + c1);
				putchar('0' + c2);
				putchar(' ');
				putchar('0' + c3);
				putchar('0' + c4);
				if (a != 98 || b != 99)
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
