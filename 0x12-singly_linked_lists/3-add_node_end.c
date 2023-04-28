#include <string.h>
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
list_t *new_node;
list_t *tmp = *head;
unsigned int len = 0;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (tmp->next)
tmp = tmp->next;

tmp->next = new_node;

return (new_node);
}
