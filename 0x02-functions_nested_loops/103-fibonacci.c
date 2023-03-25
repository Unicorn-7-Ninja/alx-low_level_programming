#include <stdio.h>

void even_liber_abbaci(void);
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	even_liber_abbaci();
	return (0);
}

/**
* even_liber_abbaci - finds and prints the sum of the even-valued
* terms, followed by a new line. By considering the terms in the
* Fibonacci sequence whose values do not exceed 4,000,000
*
* Return: void
*/
void even_liber_abbaci(void)
{
	const int max = 4000000;
	long i, n1, n2, fib, sum;

	n2 = 2;
	n1 = 1;
	sum = n2;
	for (i = 2; i < max; i++)
	{
		fib = n2 + n1;
		n1 = n2;
		n2 = fib;
		if (fib % 2 == 0 && fib < max && fib > 0)
		{
			sum += fib;
		}
	}
	printf("%li\n", sum);
}
