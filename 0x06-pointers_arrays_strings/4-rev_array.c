#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int l;
	int m;

	for (l = 0; l < n--; l++)
	{
		m = a[l];
		a[l] = a[n];
		a[n] = m;
	}
}
