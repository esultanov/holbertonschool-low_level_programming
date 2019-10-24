#include "function_pointers.h"
/**
 * print_name - print name.
 * @array: an array.
 * @size: n size.
 * @action: function name.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (action && array)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}
