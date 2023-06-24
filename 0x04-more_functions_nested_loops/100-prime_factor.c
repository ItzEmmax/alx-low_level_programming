#include <stdio.h>

/**
 *  _sqrt  - Prints prime numbers of 612852475143 followed by a new line
 *
 * @x: input number
 *
 * Return: square root of x
 *
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}


/**
 * largest_prime_factor - Find and the largest print prime factors of num
 *
 * @num: number to be found
 *
 */

void largest_prime_factor(long int num)
{
	int primNu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (primNu = 3; primNu <= sqrt(num); primNu += 2)
	{
		while (num % primNu == 0)
		{
			num = num / primNu;
			largest = primNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
