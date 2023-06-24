#incude "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding number 2 and 4
 * using _putchar twice
 *
 * Return: Always 0 (Success)
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continu;
		_putchar(num + 48);
	}
}
