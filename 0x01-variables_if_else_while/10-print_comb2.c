#include <stdio.h>

/**
 * main - prints a comb
 */

int main(void)
{
	int a = '0';
	while (a <= '9')
	{
		int b = '0';
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a == '9' && b == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return(0);
}
