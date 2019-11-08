#include "holberton.h"

/**
 * print_binary - from dec to bin with bitwise.
 * @n: is dec value.
 * Return: not return just print.
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + 48);
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
