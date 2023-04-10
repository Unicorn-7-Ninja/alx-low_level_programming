#include <stdio.h>
/**
* main - entry
* @argv: a
* @argc: int
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
