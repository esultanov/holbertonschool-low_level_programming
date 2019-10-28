#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings.
 * @separator: string between numbers.
 * @n: number of args.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ui;
	va_list w;
	char *p;

	va_start(w, n);
	for (ui = 0; ui < n; ui++)
	{
		p = va_arg(w, char*);
		if (p == NULL)
			printf("(nil");
		else
			printf("%s", p);
		if (ui != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(w);
}
