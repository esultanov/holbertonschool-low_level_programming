#include "holberton.h"

/**
 * _isdigit - checks if is digit.
 * @c: character input.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
