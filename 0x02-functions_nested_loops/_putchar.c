#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *Return: 1 success
 * on error, -1 is returned error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
