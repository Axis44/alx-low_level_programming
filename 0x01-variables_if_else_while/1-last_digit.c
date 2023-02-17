#include <stdio.h>
#include <stdio.h>
/**
 *main - random number to variable
 *print last digit
 *Return: 0 (success)
 */
int main(void)
{
	int n;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
