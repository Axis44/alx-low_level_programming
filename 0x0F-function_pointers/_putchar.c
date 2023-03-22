#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the character to print
 *
 *Return: success 1 or -1 not success
 */

int _putchar(char c)
{
	return (write(1, &c, 1)
}
