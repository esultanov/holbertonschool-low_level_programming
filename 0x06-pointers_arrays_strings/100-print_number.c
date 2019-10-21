#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Print an int.
 * @n: integer.
 */
void print_number(int n)
{
	int a;
	int b;
	int c;

	b = 0;
	a = 1;
	c = n;
	if (n < 0)
	{
		_putchar('-');
		b = 1;
	}
	while (c > 9 || c < -9)
	{
		a *= 10;
		c /= 10;
	}
	while (a > 0)
	{
		if (a > 9)
		{
			if (!b)
				_putchar((n / a % 10) + '0');
			else
				_putchar((n / a % 10) * -1 + '0');
			a /= 10;
		}
		if (a == 1)
		{
			if (b)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			a = 0;
		}
	}
}
