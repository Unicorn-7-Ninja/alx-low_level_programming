#include <stdio.h>
#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0.
* @n: integer
* Return: void
*/

void print_times_table(int n)
{
int i, j, prd;
if (n < 0 || n > 15)
{

}
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
prd = j * i;
if (j == 0)
{
printf("%i", prd);
}
else
{
if (prd < 10)
{
printf(",   %i", prd);
}
else if (prd < 100)
{
printf(",  %i", prd);
}
else
{
printf(", %i", prd);
}

}
}
putchar('\n');
}
}

}
