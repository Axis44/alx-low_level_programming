#include "main.h"

/**
 * clear_bit - set the value of a given bit
 * @n: pointer of change number
 * @index: index to clear
 *
 * Return: 1 sucess or -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
