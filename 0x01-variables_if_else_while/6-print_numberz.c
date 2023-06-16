#include <stdio.h>

/**
 * main - Prints single number in base 10 starting from 0
 * without the char variable type
 *
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
