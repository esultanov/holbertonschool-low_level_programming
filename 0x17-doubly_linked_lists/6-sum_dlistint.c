#include "lists.h"
/**
 * sum_dlistint - returns sum of n's.
 * @head: pointer to list.
 * Return: SUM or 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; temp; temp = temp->next)
		i = i + temp->n;
	return (i);
}
