#include "holberton.h"

/**
 * print_diagonal - print from 0 to 9..
 * @n: character input.
 * Return: Always numbers.
 */
void print_diagonal(int n)
{
	int d, i;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (i = 0; i < d; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
