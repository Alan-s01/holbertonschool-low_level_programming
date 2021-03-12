#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: num
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(l, n);
	for (i = 0; i < n; i++)
		sum += va_arg(l, int);

	va_end(l);
	return (sum);
}
