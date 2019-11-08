#include "holberton.h"

/**
 * set_bit - set value of bit given index.
 * @n: address of value needs change.
 * @index: starts from 0 bit index of bit.
 * Return: 1 or -1 if fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ui;

	if (index > 63)
		return (-1);
	ui = 1 << index;
	*n = ui | *n;
	return (1);
}
