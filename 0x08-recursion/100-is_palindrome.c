#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int result, len = strlen(s);
	char *copy = malloc((len + 1) * sizeof(char)); /* allocate space for copy */

	if (copy == NULL)
	{
	return (0); /* failed to allocate memory */
	}
	strcpy(copy, s); /* copy the string to the new memory location */
	if (len <= 1)
	{
	free(copy); /* free memory when done */
	return (1);
	}
	if (*copy != *(copy + len - 1))
	{
	free(copy); /* free memory when done */
	return (0);
	}
	*(copy + len - 1) = '\0';
	result = is_palindrome(copy + 1);
	free(copy); /* free memory when done */
	return (result);
}
