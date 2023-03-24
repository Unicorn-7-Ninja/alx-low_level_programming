#include <stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'q' || c == 'e')
		{
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
