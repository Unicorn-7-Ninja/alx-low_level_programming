#include "main.h"
/**
* argstostr - do thing
* @ac: int
* @av: arguments
* Return: string
*
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k++] = av[i][j];
		}
		new[k++] = '\n';
	}
	new[k] = '\0';
	return (new);
}
