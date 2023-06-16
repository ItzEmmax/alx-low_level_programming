#include <stdio.h>

/**
 * main - Prints in reverse the letters of the alphabet
 * in lowercase
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
