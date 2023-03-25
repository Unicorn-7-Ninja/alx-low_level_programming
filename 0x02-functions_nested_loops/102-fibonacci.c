#include <stdio.h>

void fibonacci(void);
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	fibonacci();
	return (0);
}

/**
* fibonacci - prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: void
*/
void fibonacci(void)
{
	long i, n1, n2, fib;

	n2 = 2;
	n1 = 1;
	printf("%li, %li, ", n1, n2);
	for (i = 2; i < 50; i++)
	{
		fib = n2 + n1;
		if (i == 49)
		{
			printf("%li", fib);
		}
		else
		{
			printf("%li, ", fib);
		}
		n1 = n2;
		n2 = fib;
	}
	putchar('\n');
}
