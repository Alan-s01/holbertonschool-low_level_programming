#include <stdio.h>


/**
 * Alphabets - prints base16
 */

int main(void)
{
	char nums;
	for (nums = 48; nums < 58; nums++)
		putchar(nums);

	char letters;
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return(0);
}
