#include "holberton.h"
/**
 * print_rev - reverse.
 * @s: an integer from main.c.
 * Return: returns 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i -1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
