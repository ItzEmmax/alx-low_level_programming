#include <stdio.h>

/**
 * main - Prints the letters of the alphabet
 * in lowercase excluding the letter 'e' and 'q'
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
