#include "holberton.h"

/**
 * print_triangle - print from 0 to 9..
 * @size: character input.
 * Return: Always numbers.
 */
void print_triangle(int size)
{
	int a, b, s;

	if (size > 0)
		for (a = 1; a <= size; a++)
		{
			for (s = size - a; s > 0; s--)
				_putchar(' ');
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
