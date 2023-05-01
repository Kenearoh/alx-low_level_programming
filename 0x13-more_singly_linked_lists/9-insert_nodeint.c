#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node_nodelist, *temp_ptr = *head;

if (head == NULL)
return (NULL);

node_nodelist = malloc(sizeof(listint_t));
if (node_nodelist == NULL)
return (NULL);

node_nodelist->n = n;

if (idx == 0)
{
node_nodelist->next = *head;
*head = node_nodelist;
return (node_nodelist);
}

for (unsigned int i = 0; temp_ptr != NULL; i++)
{
if (i == idx - 1)
{
node_nodelist->next = temp_ptr->next;
temp_ptr->next = node_nodelist;
return (node_nodelist);
}

temp_ptr = temp_ptr->next;
}

free(node_nodelist);
return (NULL);
}
