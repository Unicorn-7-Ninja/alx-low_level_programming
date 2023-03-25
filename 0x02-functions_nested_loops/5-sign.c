#include <stdio.h>
#include "main.h"

/**
* print_sign - print the number's sign
* @n: input as integer
* Return: 1, 0, or -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
