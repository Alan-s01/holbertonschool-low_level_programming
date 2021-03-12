#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: num
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));

		if (separator == NULL)
			continue;
		else if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}

