#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a:array
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
