#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers.
 * @separator: string between numbers.
 * @n: number of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ui;
	va_list l;

	va_start(l, n);
	for (ui = 0; ui < n; ui++)
	{
		printf("%d", va_arg(l, int));
		if (ui != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
