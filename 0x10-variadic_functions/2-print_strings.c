#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string
 * @n: num
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}

