#include "main.h"
/**
* print_array - prints n elements of an array
*	of integers, followed by a new line.
* @a: array
* @n: number of elements to print
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		i == n - 1 ? printf("%i", a[i]) : printf("%i, ", a[i]);
	putchar('\n');
}
