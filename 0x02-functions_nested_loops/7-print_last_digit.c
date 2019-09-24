#include "holberton.h"

/**
 * print_last_digit - prints last digit of the int.
 * @r: character input.
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int last;

	if (r < 0)
	{
		last = -1 * (r % 10);
		_putchar(last + 48);
		return (last);
	}
	else
	{
		last = r % 10;
		_putchar(last + 48);
		return (last);
	}
}
