#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (i = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar("\n");
}
