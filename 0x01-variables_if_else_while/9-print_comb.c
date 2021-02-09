#include <stdio.h>

/**
 * main - prints a comb
 */

int main(void)
{
	int num;
	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}

