#include "function_pointers.h"
/**
 * array_iterator - print name.
 * @array: an array.
 * @size: n size.
 * @action: function name.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l = 0;

	if (action && array)
	{
		for (l = 0; l < size; l++)
		{
			action(array[l]);
		}
	}
}
