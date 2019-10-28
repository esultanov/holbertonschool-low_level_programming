#include "variadic_functions.h"
/**
 * sum_them_all - sum of parameters.
 * @n: number.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int ui;
	va_list l;
	int t;

	va_start(l, n);
	for (ui = 0, t = 0; ui < n; ui++)
		t += va_arg(l, int);
	va_end(l);
	return (t);
}
