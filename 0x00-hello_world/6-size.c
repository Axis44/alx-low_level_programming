#include<stdio.h>
/**
*main - function of various sizes
*all types
*Return:0 success
*/

int main(void)
{
int intType;
float floatType;
long longType;
double doubleType;
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("size of long: %zu bytes\n", sizeof(longType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
