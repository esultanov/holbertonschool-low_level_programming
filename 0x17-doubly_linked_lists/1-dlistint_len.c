#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list.
 * @h: pointer to list.
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t num;

	new = h;
	while (new && new->prev)
		new = new->prev;
	for (num = 0; new; num++, new = new->next)
		;
	return (num);
}
