#include "main.h"

/**
 * print_line - Prints a straight line with _ char
 *
 * @n: is the number of times the _ char will be printed
 *
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
