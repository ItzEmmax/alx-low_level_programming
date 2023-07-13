#include "main.h"

/**
 * _islower - Check if character are lowercase
 *
 * @c: checks functions input
 *
 * Return: returns 1 if 'c' is in lowercase,
 * otherwise return always 0 (Success)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
