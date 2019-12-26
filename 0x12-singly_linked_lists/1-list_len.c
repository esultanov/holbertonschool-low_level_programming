#include "lists.h"
/**
 * list_len - prints number of elements in a list_t list.
 * @h: list.
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t i;

	i = 0;
	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
