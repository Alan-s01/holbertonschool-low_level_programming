#include <stdio.h>

/**
 * main - prints the aplhabets
 */

int main(void)
{
	int i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetUp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}

	i = 0;

	while (alphabetUp[i] != '\0')
	{
		putchar(alphabetUp[i]);
		i++;
	}

	return (0);
}

