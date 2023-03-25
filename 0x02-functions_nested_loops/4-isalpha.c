#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - checks for alphabetic characters
* @c: letter as int
* Return: 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
