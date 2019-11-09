#include "holberton.h"

/**
 * get_endianness - check the endianness.
 * Return: 0 if big or 1 if little.
 */

int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
