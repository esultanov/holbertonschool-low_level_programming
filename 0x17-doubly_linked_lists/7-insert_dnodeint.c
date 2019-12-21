#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to list.
 * @idx: index of the node.
 * @n: value to add n.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *temp, *prev, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (temp = *h, i = 1; temp && i < idx; i++, temp = temp->next)
		prev = temp;
	if (idx == 0)
	{
		*h = new; new->prev = NULL;
		new->next = (temp == NULL) ? NULL : temp;
		return (new);
	}
	if (idx == 1)
	{
		prev = *h;
		temp = ((*h)->next == NULL) ? NULL : (*h)->next;
		new->prev = prev; new->next = temp; prev->next = new;
		if (temp)
			temp->prev = new;
		return (new);
	}
	if (idx == i && temp == NULL)
	{
		if (prev != NULL)
		{
			new->prev = prev; new->next = NULL;
			prev->next = new; return (new);
		}
		free(new); return (NULL);
	}
	else if (idx != i && temp == NULL)
	{
		free(new); return (NULL);
	}
	prev = temp; temp = temp->next; new->prev = prev;
	new->next = temp; prev->next = new; temp->prev = new;
	return (new);
}
