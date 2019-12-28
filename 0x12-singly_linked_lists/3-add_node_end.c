#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list.
 * @str: string value of node.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	tmp = *head;
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;
	if (tmp)
		tmp->next = new;
	else
		*head = new;
	return (*new);
}
