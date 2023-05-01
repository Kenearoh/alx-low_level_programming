#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new_nodes node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new_nodes node is added
* @n: data to insert in the new_nodes node
*
* Return: pointer to the new_nodes node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_nodes;
listint_t *temp_ptr;

new_nodes = malloc(sizeof(listint_t));
if (!new_nodes || !head)
return (NULL);

new_nodes->n = n;
new_nodes->next = NULL;

if (idx == 0)
{
new_nodes->next = *head;
*head = new_nodes;
return (new_nodes);
}

temp_ptr = *head;
for (i = 0; temp_ptr != NULL; i++)
{
if (i == idx - 1)
{
new_nodes->next = temp_ptr->next;
temp_ptr->next = new_nodes;
return (new_nodes);
}
temp_ptr = temp_ptr->next;
}

free(new_nodes);
return (NULL);
}
