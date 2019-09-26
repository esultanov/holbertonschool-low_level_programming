#include "holberton.h"

/**
 * print_times_table - prints times table.
 * @n: character input.
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int h, v, z;

	if (n <= 15 && n >= 0)
	{
		for (h = 0; h <= n; h++)
		{
			for (v = 0; v <= n; v++)
			{
				z = h * v;
				if (z > 99)
				{
					_putchar((z / 100) + 48);
					_putchar(((z % 100) / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else if ((z > 9) && (z < 100))
				{
					_putchar(' ');
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else if (v != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + 48);
				}
				else
				{
					_putchar(z + 48);
				}
				if (v != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
