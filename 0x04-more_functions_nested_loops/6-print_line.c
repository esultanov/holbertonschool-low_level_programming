#include "holberton.h"

/**
 * print_line - print from 0 to 9..
 * @n: character input.
 * Return: Always numbers.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
