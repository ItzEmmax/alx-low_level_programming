#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a conditional statement for a
 * random number
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positve\n");

	else if (n == 0)
		printf("is zero\n");

	else
		printf("is negative\n");

	return (0);
}
