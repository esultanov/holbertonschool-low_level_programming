#include "holberton.h"

/**
 * times_table - prints times table.
 *  character input.
 * Return: Always 0.
 */
void times_table(void)
{
	int h, v, z;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			z = h * v;
			if (z > 9)
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((z % 10) + 48);
			}
			if (v != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
