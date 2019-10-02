#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array containers..
 * @a: an integer from main.c.
 * @n: number of element.
 * Return: returns 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
