#include "lists.h"
/**
 * print_dlistint - prints elements of a list.
 * @h: pointer to list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{

	const dlistint *new;
	size_t num;

	new = h;
	while (new && new->prev)
		new = new->prev;
	for (num = 0; new; num++, new = new->next)
		printf("%d\n", new->n);

	return(num);
}
