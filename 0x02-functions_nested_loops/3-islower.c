#include "holberton.h"

/**
 * _islower - checks if alphabet is lowercase or not.
 * @c: character input.
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
