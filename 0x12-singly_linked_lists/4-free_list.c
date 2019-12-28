#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: head of list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *nxt;

	tmp = head;
	while (tmp != NULL)
	{
		nxt = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = nxt;
	}
}
