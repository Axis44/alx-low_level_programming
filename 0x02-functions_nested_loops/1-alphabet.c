#include "main.h"

/**
 *main - entry point
 *function that prints the alphabets in lowercase
 *Return: 0 success
 */
int main(void)
{
	char letter;
for(letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}