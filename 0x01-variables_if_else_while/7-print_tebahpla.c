#include <stdio.h>

/**
 * Alphabets - prints the aplhabets
 */

int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return(0);
}

