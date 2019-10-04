#include "holberton.h"
/**
 * reverse_array - rev integers.
 * @a: ints.
 * @n: num of elms.
 */
void reverse_array(int *a, int n)
{
	int elm, rev;

	for (elm = 0; elm < (n / 2); elm++)
	{
		rev = a[elm];
		a[elm] = a[n - elm - 1];
		a[n - elm - 1] = rev;
	}
}
