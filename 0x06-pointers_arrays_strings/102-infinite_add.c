#include "holberton.h"

/**
 * infinite_add - add two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: buffer.
 * @size_r: buffer size.
 * Return: value.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, rem, d, f;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	a--;
	b--;
	rem = 0;
	r[size_r - 1] = '\0';
	for (size_r -= 2; size_r >= 0; size_r--)
	{
		if (rem == 0 && a < 0 && b < 0)
			break;
		if (a < 0)
			d = 0;
		else
			d = n1[a--] - 48;
		if (b < 0)
			f = 0;
		else
			f = n2[b--] - 48;
		r[size_r] = (d + f + rem) % 10 + 48;
		rem = (d + f + rem) / 10;
	}
	if (size_r < 0 && ((a >= 0 || b >= 0) || rem != 0))
		return (0);
	return (&r[++size_r]);
}
