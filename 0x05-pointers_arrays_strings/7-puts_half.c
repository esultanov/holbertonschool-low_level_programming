#include "holberton.h"
/**
 * puts_half - puts.
 * @str: an integer from main.c.
 * Return: returns 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
