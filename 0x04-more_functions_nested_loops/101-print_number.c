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
		n = n * -1;
		_putchar ('-');
	}
	if (n > 999999999)
		_putchar ((n / 1000000000) + '0');
	n = n % 1000000000;
	if (n > 99999999 && n < 1000000000)
		_putchar ((n / 100000000) + '0');
	n = n % 100000000;
	if (n > 9999999 && n < 100000000)
		_putchar ((n / 10000000) + '0');
	n = n % 10000000;
	if (n > 999999 && n < 10000000)
		_putchar ((n / 1000000) + '0');
	n = n % 1000000;
	if (n > 99999 && n < 1000000)
		_putchar ((n / 100000) + '0');
	n = n % 100000;
	if (n > 9999 && n < 100000)
		_putchar ((n / 10000) + '0');
	n = n % 10000;
	if (n > 999 && n < 10000)
		_putchar ((n / 1000) + '0');
	n = n % 1000;
	if (n > 99 && n < 1000)
		_putchar ((n / 100) + '0');
	n = n % 100;
	if (n > 9 && n < 100)
		_putchar ((n / 10) + '0');
	_putchar ((n % 10) + '0');
}
