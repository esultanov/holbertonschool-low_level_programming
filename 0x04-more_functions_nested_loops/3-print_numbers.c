#include "holberton.h"

/**
 * print_numbers - print from 0 to 9..
 * character input.
 * Return: Always numbers.
 */
void print_numbers(void)
{
	int nums;

	nums = '0';
	while (nums <= '9')
	{
		_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
