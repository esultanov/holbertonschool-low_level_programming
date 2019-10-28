#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print everythink with seperators between.
 * @format: type attributes.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sval;
	int ival, i = 0;
	float dval;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 'f':
			dval = va_arg(ap, double);
			printf("%f", dval);
			break;
		case 's':
			sval = va_arg(ap, char *);
			if (sval)
				printf("%s", sval);
			break;
		case 'c':
			putchar(va_arg(ap, int));
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
