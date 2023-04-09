#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - checks for lowercase characters
* @c: letter as int
* Return: 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
