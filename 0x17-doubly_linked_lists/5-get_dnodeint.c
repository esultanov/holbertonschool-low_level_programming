#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: pointer to list.
 * @index: index of the node, starting from 0
 * Return: node number or Null.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; temp && i < index; temp = temp->next, i++)
		;
	return (temp);
}
