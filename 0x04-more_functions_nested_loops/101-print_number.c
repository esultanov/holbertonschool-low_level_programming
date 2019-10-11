#include "holberton.h"

/**
 * print_number - print int.
 * @n: use _putchar only.
 * Return: return 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n > 999)
	{
		_putchar((n / 1000) + 48);
		_putchar((n / 100 % 10) + 48);
		_putchar((n / 10 % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n < 1000 && n > 99)
	{
		_putchar((n / 100) + 48);
		_putchar((n / 10 % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
	{
		if (n > 9)
			_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
}
