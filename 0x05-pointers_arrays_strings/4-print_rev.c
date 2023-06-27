#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
