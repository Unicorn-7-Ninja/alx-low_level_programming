#include <stdio.h>
#include "main.h"

/**
* _abs - outputs the absolute value of an integer
* @n: integer to check
* Return: absolute value
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n - (n * 2));
}
}
