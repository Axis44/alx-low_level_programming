#include<stdio.h>

/**
*main - function of various sizes
*all types
*Return:0 success
*/

int main(void)
{
char aType;
int bType;
long int cType;
long long int dType;
float fType;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(aType));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(bType));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(cType));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(dType));
printf("Size of  a float: %lu byte(s)\n", (unsigned long)sizeof(fType));
return (0);
}
