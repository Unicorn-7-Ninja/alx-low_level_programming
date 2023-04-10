#include <stdlib.h>
#include <stdio.h>
/**
* main - entry
* @argc: int
* @argv: arguments
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i = 0, a = 0, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	if (a <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (a >= coins[i])
		{
			count++;
			a -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
