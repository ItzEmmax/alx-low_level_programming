#include "main.h"

/**
 * main - Prints the sum of even valued terms followed by a new line
 *
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	unsigned long fib1 = 0, fib2, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2
			fib2 = sum;
	}
	printf("%.Of\n", total_sum);

	return (0);
}
