#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char zun;
	char ley;

	zun = 0;
	while (dest[zun] != '\0')
	{
		zun++;
	}
	ley = 0;
	while (ley < n && src[ley] != '\0')
	{
	dest[zun] = src[ley];
	zun++;
	ley++;
	}
	dest[zun] = '\0';
	return (dest);
}
