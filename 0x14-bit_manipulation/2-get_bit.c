#include "main.h"

/**
 * get_bit - retourne la valeur d'un bit à un indice donné dans un nombre décimal
 * @n: nombre à rechercher
 * @index: indice du bit
 *
 * Return: valeur du bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
