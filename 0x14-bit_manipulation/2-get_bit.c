#include "holberton.h"
/**
 * get_bit - get bit from index.
 * @n: decimal value.
 * @index: index of bit (1 or 0).
 * Return: return bit of index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 18446744073709551614) /* ulong int value */
		return (-1);
	n = n >> index;
	return (n & 1);
}
