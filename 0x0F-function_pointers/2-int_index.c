#include "function_pointers.h"
/**
 * int_index - print name.
 * @array: an array.
 * @size: n size.
 * @cmp: function name.
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
		{
			return (l);
		}
	}
	return (-1);
}
