#include "holberton.h"
/**
 * print_rev - reverse.
 * @s: an integer from main.c.
 * Return: returns 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 62; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
