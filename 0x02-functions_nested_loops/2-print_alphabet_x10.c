#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabet using putchar
*
* Return: 0
*/
void print_alphabet_x10(void)
{
char i = 'a';
int j = 0;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
}
