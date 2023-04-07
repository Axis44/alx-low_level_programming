#include "main.h"

/**
 * set_bit - set value of bit at given index
 * @n: pointer where index is indexed
 * @index: index of bit
 *
 * Return: 1 (sucess) or -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
