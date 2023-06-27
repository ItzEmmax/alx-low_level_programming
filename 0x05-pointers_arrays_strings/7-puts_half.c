#include "main.h"

/**
 * puts_half -  Prints half of a string followed by a new line
 *
 * @str: string input
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
