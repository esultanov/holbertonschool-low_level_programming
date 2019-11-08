#include "holberton.h"

/**
 * clear_bit - set 0 to given bit.
 * @n: value needs change.
 * @index: bit which will set to 0.
 * Return: 1 or -1 if fails.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ui;

	if (index > 63)
		return (-1);
	ui = 1 << index;
	*n = *n & ~ui;
	return (1);
}
