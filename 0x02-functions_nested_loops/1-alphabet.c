#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *function that prints the alphabets in lowercase
 *Return: 0 (success)
 */

int main(void)
{

	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
