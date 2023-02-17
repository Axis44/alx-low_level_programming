#include <stdio.h>
#include <time.h>

/**
 *main - entry point
 *lowercase and uppercase alphabets
 *Return: 0 (successs)
 */

int main(void)
{
	char low;

	for (low = 'a', low <= 'z', low++)
	putchar(low);

	for (low = 'A', low <= 'Z', low++)
	putchar(low);
	putchar('\n');

	return (0);
}

