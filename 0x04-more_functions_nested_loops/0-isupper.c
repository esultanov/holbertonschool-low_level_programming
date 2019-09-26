#include "holberton.h"

/**
 * _isupper - checks if uppercase.
 * @c: character input.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
