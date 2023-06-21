#include <stdio.h>

/**
* main - Prints the alphabets in lowercase
* followed by a new line
*
* prototype function void print_alphabet(vord)
*
* Return: Always 0.
*/


void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar("\n");

	return (0);
}
