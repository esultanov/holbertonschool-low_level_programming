#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: pointer to list.
 * @n: value.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (temp && temp->next)
		temp = temp->next;
	if (temp)
	{
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
