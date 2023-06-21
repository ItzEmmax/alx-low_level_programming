#include "main.h"

/**
 * print_sign - prints '+' when n > 0, when n = zero print '0' and
 * '-' when n < zero
 *
 * @n: takes integer input type as function
 *
 * Return: 1 if n > +, 0 if n = 0, and -1 n = -
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
