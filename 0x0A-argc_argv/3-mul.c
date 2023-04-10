#include <stdio.h>
#include <stdlib.h>
/**
* main - entry
* @argv: a
* @argc: int
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	long a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	a = atol(argv[1]);
	b = atol(argv[2]);
	printf("%li\n", a * b);
	return (0);
	}
}
