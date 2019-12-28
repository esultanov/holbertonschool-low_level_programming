#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list.
 * @str: string value of node.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
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
	new->next = *head;
	*head = new;
	return (*head);
}
