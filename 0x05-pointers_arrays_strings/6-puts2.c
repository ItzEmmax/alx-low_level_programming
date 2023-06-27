#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: string input
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}

	putchar('\n');
}
