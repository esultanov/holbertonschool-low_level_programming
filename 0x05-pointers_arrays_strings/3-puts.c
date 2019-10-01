#include "holberton.h"
/**
 * _puts - swap two int.
 * @str: an integer from main.c.
 * Return: returns 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
