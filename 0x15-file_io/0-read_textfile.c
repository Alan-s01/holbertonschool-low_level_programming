#include "holberton.h"
/**
 * read_textfile - reads a text file
 * @filename: file
 * @letters: letters
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, fl, rl;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		free(c);
		return (0);
	}

	rl = read(fl, c, letters);
	if (rl == -1)
	{
		close(fl);
		free(c);
		return (0);
	}

	for (i = 0; i < rl; i++)
	{
		if (write(STDOUT_FILENO, &c[i], 1) == -1)
		{
			close(fl);
			free(c);
			return (0);
		}
	}

	close(fl);
	free(c);
	return (rl);
}
