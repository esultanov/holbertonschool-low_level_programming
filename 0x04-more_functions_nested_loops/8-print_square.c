#include "holberton.h"

/**
 * print_square - print from 0 to 9..
 * @size: character input.
 * Return: Always numbers.
 */
void print_square(int size)
{
	int d, i;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
