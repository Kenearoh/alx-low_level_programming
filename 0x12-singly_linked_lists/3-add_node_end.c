#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a node at the end of linked list
* @head: pointer to the first element in list
* @n: new input of the new element
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
list_t *added_node, *temp_variable;

if (head == NULL || str == NULL)
return (NULL);

added_node = malloc(sizeof(list_t));
if (added_node == NULL)
return (NULL);

added_node->str = strdup(str);
if (added_node->str == NULL)
{
free(added_node);
return (NULL);
}

added_node->len = strlen(str);
added_node->next = NULL;

if (*head == NULL)
{
*head = added_node;
}
else
{
temp_variable = *head;
while (temp_variable->next != NULL)
{
temp_variable = temp_variable->next;
}
temp_variable->next = added_node;
}

return (added_node);
}
