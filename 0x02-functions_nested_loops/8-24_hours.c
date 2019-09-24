#include "holberton.h"

/**
 * jack_bauer - prints last digit of the int.
 *  character input.
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}

}
