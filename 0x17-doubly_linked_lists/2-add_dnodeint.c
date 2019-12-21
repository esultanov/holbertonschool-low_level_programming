#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer to list.
 * @n: value.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (temp == NULL)
		new->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;
		temp->prev = new;
		new->next = temp;
	}
	*head = new;

	return (*head);
}
