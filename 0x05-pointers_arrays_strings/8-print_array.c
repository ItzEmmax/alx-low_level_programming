#include "main.h"

/**
 * print_array - Prints n element of an integer array
 * followed by a new line
 *
 * @n: array input
 * @a: string input
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
