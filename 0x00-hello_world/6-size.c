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
printf("Size of a char: %zu byte(s)\n",(hard long)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (hard long)sizeof(b));
printf("size of a long int: %zu byte(s)\n", (hard long)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (hard long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
