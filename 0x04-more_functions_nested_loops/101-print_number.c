#include "holberton.h"

/**
 * print_number - print int.
 * @n: use _putchar only.
 * Return: return 0.
 */
void print_number(int n)
{
	int m, l, c;

	if (n < 0)
	{
		n = n * -1;
		_putchar ('-');
	}
	if (n > 999999999)
	{
		m = 1000000000;
		c = 10;
	}
	if (n > 99999999 && n < 1000000000)
	{
		m = 100000000;
		c = 9;
	}
	if (n > 9999999 && n < 100000000)
	{
		m = 10000000;
		c = 8;
	}
	if (n > 999999 && n < 10000000)
	{
		m = 1000000;
		c = 7;
	}
	if (n > 99999 && n < 1000000)
	{
		m = 100000;
		c = 6;
	}
	if (n > 9999 && n < 100000)
	{
		m = 10000;
		c = 5;
	}
	if (n > 999 && n < 10000)
	{
		m = 1000;
		c = 4;
	}
	if (n > 99 && n < 1000)
	{
		m = 100;
		c = 3;
	}
	if (n > 9 && n < 100)
	{
		m = 10;
		c = 2;
	}
	if (n < 10 && n >= 0)
	{
		m = 10;
		c = 1;
	}
	for (l = 0; l < c; l++)
	{
		_putchar ((n / m % 10) + 48);
		m /= 10;
	}
}
