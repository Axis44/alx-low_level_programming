#include <stdio.h>
#include <unistd>

/**
 * main - entry point
 *prints two digits combinations
 * Return: 0 (success)
 */

int main(void)
{
	int d, p;

	for (d = '0', d <= '9', d++)
	{
	for (p = '0', p <= '9'; p++)
	{
	if (d < p)
	{
	putchar(d);
	putchar(p);

	if (d != '8' || (c == '8' && p != '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar("\n");
	return (0);
}
