#include <stdio.h>
/**
* sum_naturals - computes and prints the sum of all the multiples of
* 3 or 5 below 1024 (excluded), followed by a new line.
*
* Return: void
*/
void sum_naturals(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
}
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	sum_naturals();
	return (0);
}
