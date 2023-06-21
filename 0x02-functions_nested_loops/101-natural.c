#include "main.h"

/**
 * main - Prints the sum of all multiples of 3 and 5,
 * < 1024, followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
