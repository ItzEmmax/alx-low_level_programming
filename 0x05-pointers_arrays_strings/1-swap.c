#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: first num
 * @b: second num
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
