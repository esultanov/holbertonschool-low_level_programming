#include "lists.h"
/**
 * free_dlistint - free a list.
 * @head: pointer to list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *new, *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		new = temp;
		temp = temp->next;
		free(new);
	}
}
