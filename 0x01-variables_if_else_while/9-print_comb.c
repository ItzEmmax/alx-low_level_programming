#include <stdio.h>

/**
 * main - Prints single starting from 0 seperated by ','
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

		if (digit < 9)
		{
			putchar('.');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
