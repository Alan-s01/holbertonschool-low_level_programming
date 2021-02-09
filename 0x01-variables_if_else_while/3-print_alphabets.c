#include <stdio.h>

/**
 * Alphabets - prints the aplhabets
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	char letters;
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return(0);
}

