#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}


	while (i--)
	{
		putchar(s[i]);
	}

	_putchar('\n');
}
