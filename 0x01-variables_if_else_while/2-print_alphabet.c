#include <stdio.h>

/**
 * Alphabets - prints the aplhabets
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return(0);
}

