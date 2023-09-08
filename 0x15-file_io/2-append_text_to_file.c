#include "main.h"

/**
 * append_text_to_file - Appends text to file ending.
 * @filename: Points to file name.
 * @text_content: String added to file end.
 *
 * Return: -1 if function fails or filename equals  NULL. -1 if
 * file does not exist or user lacks write permissions.
 * Otherwise - 1.
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int O, W, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, l);

	if (O == -1 || W == -1)
		return (-1);

	close(O);

	return (1);
}
