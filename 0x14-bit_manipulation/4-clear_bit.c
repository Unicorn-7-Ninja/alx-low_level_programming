#include "main.h"

/**
 * clear_bit - met la valeur d'un bit donné à 0
 * @n: pointeur vers le nombre à modifier
 * @index: indice du bit à effacer
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
