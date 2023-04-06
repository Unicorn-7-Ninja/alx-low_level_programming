#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - helping function
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
