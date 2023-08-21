#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to append to
 * @src: string to add
 *
 * Return: pointer to resulting string, success
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (dest[i] != '\0')
		i++;

	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
