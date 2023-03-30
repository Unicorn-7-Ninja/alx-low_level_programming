#include "main.h"
/**
* leet - do thing
* @str: str
* Return: str
*/
char *leet(char *str)
{
	int i, j;
	char leet_table[] = {'4', '3', '0', '7', '1'};
	char leet_letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_table[j % 5];
				break;
			}
		}
	}
	return (str);
}
