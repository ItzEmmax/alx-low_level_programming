#include "main.h"

/**
 * _isalpha - checks if characters are in both upper or lower case
 *
 * @c: takes it input from other functions.
 *
 * Return: return 1 if is true, if not return 0
 *
 */

int _isalpha(int c)
{
	if (c >= 97 && c < 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
