#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: file
 * @text_content: text
 * Return: text
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fl;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fl = open(filename, O_APPEND | O_WRONLY);
	if (fl == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fl, &text_content[i], 1) == -1)
		{
			close(fl);
			return (-1);
		}
	}

	close(fl);
	return (1);
}
