#include "holberton.h"

/**
 * more_numbers - print from 0 to 9..
 * character input.
 * Return: Always numbers.
 */
void more_numbers(void)
{
	int nums, times;

	for (times = 0; times <= 9; times++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
				_putchar((nums / 10) + '0');
			_putchar((nums % 10) + '0');
		}
		_putchar('\n');
	}
}
