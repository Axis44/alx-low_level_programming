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

printf("Size of a char: %lu bytes\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of  a float: %lu byte\n", (unsigned long)sizeof(f));
return (0);
}
