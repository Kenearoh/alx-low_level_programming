#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: head of double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;

	if (head == NULL || str == NULL)
		return (NULL);

	added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
		return (NULL);

	added_node->string = strdup(str);
	if (added_node->str == NULL)
	{
		free(added_node);
		return (NULL);
	}
	added_node->len = strlen(str);
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}
