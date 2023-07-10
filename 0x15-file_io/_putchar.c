#include <unistd.h>

/**
 * this write the character c to stdout and run
 * 
 *
 * Always Return: 1 On success and on error, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
