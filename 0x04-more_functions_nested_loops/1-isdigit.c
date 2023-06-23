#include "main.h"

/**
 * _isdigit - checks from 0 to 9
 *
 *
 * @c: taken input
 *
 * Return: 1 if it ia a digit, else 0.
 *
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
