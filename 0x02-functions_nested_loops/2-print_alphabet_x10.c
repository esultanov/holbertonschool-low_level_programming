#include "holberton.h"

/**
 * print_alphabet_x10 - 10 times alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int ten = '0';

	while (ten <= '9')
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		ten++;
	}
}
