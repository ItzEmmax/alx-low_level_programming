#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes to a buffer.
 * @file: File buffer name.
 *
 * Return: Pointer to new buffer
 *
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 *
 */

void close_file(int fd)
{
	int C;

	C = close(fd);

	if (C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents from one file to another.
 * @argc: Num of arguments supplied.
 * @argv: Array of pointers.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	int F, T, R, W;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	F = open(argv[1], O_RDONLY);
	R = read(F, buffer, 1024);
	T = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (F == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		W = write(T, buffer, R);
		if (T == -1 || W == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		R = read(F, buffer, 1024);
		T = open(argv[2], O_WRONLY | O_APPEND);

	} while (R > 0);

	free(buffer);
	close_file(F);
	close_file(T);

	return (0);
}
