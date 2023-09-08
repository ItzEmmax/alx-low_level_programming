#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints to POSIX stdout.
 * @filename: Pointer to file name.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: function fails or filename is NULL - 0. O/w - the
 * actual number of bytes the function can read and print.
 *
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, R, W;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	O = open(filename, O_RDONLY);
	R = read(O, buff, letters);
	W = write(STDOUT_FILENO, buff, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(O);

	return (W);
}
