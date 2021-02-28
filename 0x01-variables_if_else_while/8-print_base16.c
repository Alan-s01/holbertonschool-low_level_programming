#include <stdio.h>

/**
 * main - prints base16
 */

int main(void)
{
	int i = 0;
	char base16[] = "0123456789abcdef\n";

	while (base16[i] != '\0')
	{
		putchar(base16[i]);
		i++;
	}

	return (0);
}

