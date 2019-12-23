#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to list.
 * @index: index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (temp = *head, i = 0, prev = NULL; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	next = temp->next;
	if (prev == NULL)
	{
		free(temp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(temp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(temp);
	}
	return (1);
}
