#include "holberton.h"
/**
 * binary_to_uint - bin to int.
 * @b: char.
 * Return: decimal.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;

	dec = 0;
	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != 49 && *b != 48)
			return (0);
		dec = 2 * dec + (*b - 48);
	}
	return (dec);
}
