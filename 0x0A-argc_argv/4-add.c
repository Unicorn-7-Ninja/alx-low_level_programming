#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *str);
/**
* main - entry
* @argc: int
* @argv: string
* Return: 1 or 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_valid_number(argv[i]))
		{
		printf("Error\n");
		return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
/**
* is_valid_number - do thing
* @str: string
* Return: 0 or 1
*/
int is_valid_number(char *str)
{
	int i = 0;

	if (str[0] == '-')
	{
		i = 1;
	}
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
		return (0);
		}
	}
	return (1);
}
