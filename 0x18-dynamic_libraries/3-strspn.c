#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing list of characters to match
 *
 * Return: 1 success, or -1 failurre
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, t, mark;

	t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		mark = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				t++;
				mark = 1;
			}
		}
		if (mark == 0)
			return (t);
	}
	return (0);
}
