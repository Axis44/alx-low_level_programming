#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: input value
 *@src: input value
 *Return: resulting string
 **/

char *_strcat(char *dest, char *src)
{
char dest[] = "Hello ";
char src[] = "World!";
printf("Concatenated String: %s\n",  strcat(dest, src));
return (0);
}
