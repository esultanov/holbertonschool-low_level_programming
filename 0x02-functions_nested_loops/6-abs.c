#include "holberton.h"

/**
 * _abs - computes the absolute value of integer..
 * @r: character input.
 * Return: Always 0.
 */
int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	else
		return (r);
}
