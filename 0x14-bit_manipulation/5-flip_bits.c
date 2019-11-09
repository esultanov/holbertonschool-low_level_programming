#include "holberton.h"

/**
 * flip_bits -count bit diference..
 * @n: value of first var.
 * @m: value of the second var.
 * Return: bit diference.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ui;
	int count = 0; /* return this value */

	if (index > 64)
		return (-1);
	ui = n ^ m;
	while (ui)
	{
		if (ui & 1)
			count++;
		ui >>= 1;
	}
	return (count);
}
