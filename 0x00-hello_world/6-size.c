#include<stdio.h>
/**
*main - function of various sizes
*all types
*Return:0 success
*/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(a));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(b));
printf("size of long int: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte\n", (unsigned long)sizeof(f));
return (0);
}
