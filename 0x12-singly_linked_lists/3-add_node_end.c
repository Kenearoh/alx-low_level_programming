#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
* add_node_end - adds a node at the end of linked list
* @head: pointer to the first element in list
* @str: string to be added to node
* Return: address of the adds_node element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_nodes = malloc(sizeof(list_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->str = strdup(str);
	new_nodes->len = len;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_nodes;

	return (new_nodes);
}
