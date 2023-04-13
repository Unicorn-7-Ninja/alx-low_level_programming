#include "main.h"
/**
* count_words - counts the number of words in a string
* @str: string to count
* Return: number of words
**/
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
		{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		}
	return (count);
}

/**
* strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings
**/
char **strtow(char *str)
{
	int i, j, k, count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	words[count] = NULL;

	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (k = i; str[k] && str[k] != ' '; k++)
				;
		words[j] = malloc((k - i + 1) * sizeof(char));
			if (words[j] == NULL)
			{
			while (--j >= 0)
				free(words[j]);
			free(words);
		return (NULL);
		}
		strncpy(words[j], &str[i], k - i);
		words[j][k - i] = '\0';
		j++;
		i = k;
		}
	}
	return (words);
}
