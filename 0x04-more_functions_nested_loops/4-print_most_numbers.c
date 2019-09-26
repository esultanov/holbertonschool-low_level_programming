#include "holberton.h"

/**
 * print_most_numbers - print from 0 to 9..
 * character input.
 * Return: Always numbers.
 */
void print_most_numbers(void)
{
	int nums;

	nums = '0';
	while (nums <= '9')
	{
		if (nums != '2' && nums != '4')
			_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
