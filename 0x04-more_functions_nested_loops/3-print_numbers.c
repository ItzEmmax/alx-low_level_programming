#include "main.h"

/**
 * print_numbers - Prints 0 t0 9, and followed by a new line
 *
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);

	_putchar('\n');
}
