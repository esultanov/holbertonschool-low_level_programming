#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t i;

	i = 0;
	ptr = h;
	while (ptr)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
