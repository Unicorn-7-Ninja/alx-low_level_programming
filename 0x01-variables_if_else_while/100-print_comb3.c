#include <stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/
int main(void)
{
	int h, a;

	for (h = 0; h < 10; h++)
	{
		for (a = h + 1; a < 10; a++)
		{
			putchar(h + '0');
			putchar(a + '0');
			if (h < 8 || a < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
