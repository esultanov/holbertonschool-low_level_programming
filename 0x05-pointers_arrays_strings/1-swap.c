#include "holberton.h"
/**
 * swap_int - swap two int.
 * @a: an integer from main.c.
 * @b: an int.
 * Return: returns 0.
 */
void swap_int(int *a, int *b)
{
	int atob;

	atob = *a;
	*a = *b;
	*b = atob;
}
