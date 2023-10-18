#include "main.h"

/**
 * _isupper - Prints 1 if letter c is in uppercase
 *
 * @c: taken from input of alphabet
 *
 * Return: 1 if c is uppercase, else 0.
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
