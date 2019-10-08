#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - gets lenght of str.
 * @a: return number of bytes from s.
 * @size: size of int.
 * Return: pointer to char.
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
