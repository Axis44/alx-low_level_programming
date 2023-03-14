#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup- duplicate to new memoy space location
 * @str: char
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *bbb;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while
		(str[i] != '\0');
	i++;

	bbb = malloc(sizeof(char) * (i + 1));

	if (bbb == NULL)
		return (NULL);

	for (n = 0; str[i]; n++)
		bbb[n] = str[n];

	return (bbb);
}
