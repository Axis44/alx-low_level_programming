#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string of binary number
 *
 * Return: converted number, OR one or more chars in the string
 */

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[t] - '0');
	}

	return (dec_val);
}
