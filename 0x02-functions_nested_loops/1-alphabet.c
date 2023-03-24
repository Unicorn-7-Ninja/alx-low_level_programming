#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints lowercase alphabet using putchar
*
* Return: 0
*/
void print_alphabet(void)
{
char i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
