#include "variadic_functions.h"
void f_int(va_list l);
void f_string(va_list l);
void f_char(va_list l);
void f_float(va_list l);
/**
 * print_all - prints anything
 * @format: variable
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *s = "";
	va_list l;
	t_prints types[] = {
		{"i", f_int},
		{"s", f_string},
		{"c", f_char},
		{"f", f_float},
		{NULL, NULL}
	};
	i = 0;
	j = 0;
	va_start(l, format);
	while (format && format[i])
	{
		while (types[j].val != NULL)
		{
			if (format[i] == types[j].val[0])
			{
				printf("%s", s);
				types[j].f(l);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(l);
	printf("\n");
}
/**
 * f_int - prints int
 * @l: list
 */
void f_int(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
 * f_string - prints string
 * @l: list
 */
void f_string(va_list l)
{
	char *s;

	s = va_arg(l, char*);
	if (s == NULL)
		s = "(nil)";
}
/**
 * f_char - prints char
 * @l: list
 */
void f_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * f_float - prints float
 * @l: list
 */
void f_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
