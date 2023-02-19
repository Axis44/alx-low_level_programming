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
long inttType;
double intType;
float floatType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("size of a long int: %zu byte(s)\n", sizeof(long intType));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long intType));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
