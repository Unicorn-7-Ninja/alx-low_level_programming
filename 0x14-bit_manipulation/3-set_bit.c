#include "main.h"

/**
 * set_bit - met un bit à 1 à un index donné
 * @n: pointeur vers le nombre à modifier
 * @index: indice du bit à mettre à 1
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
