#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file
 * @text_content: text
 * Return: file
 */

int create_file(const char *filename, char *text_content)
{
	int i, fl;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fl = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fl < 0)
	{
		if (errno == EEXIST)
		{
			fl = open(filename, O_WRONLY | O_TRUNC);
			if (fl == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fl, &text_content[i], 1) == -1)
			return (-1);
	}

	close(fl);
	return (1);
}

