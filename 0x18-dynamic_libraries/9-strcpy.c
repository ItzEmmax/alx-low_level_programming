#include "main.h"

/**
 * _strcpy - Points to a string
 *
 * @dest: destination
 * @src: string input
 *
 * Return: pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
