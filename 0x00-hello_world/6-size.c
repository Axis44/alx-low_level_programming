#include<stdio.h>
/**
*main - function of various sizes
*all types
*Return:0 success
*/

int main(void)
{
char charType;
int intType;
long longType;
double doubleType;
float floatType;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("size of long: %zu bytes\n", sizeof(longType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of float: %zu byte\n", sizeof(floatType));
return (0);
}
