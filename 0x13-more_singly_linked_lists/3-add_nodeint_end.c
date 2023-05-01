#include "lists.h"
/**
* add_nodeint_end - adds a new_node node at the end of a linked list
* @head: pointer to the first element in the list
* @n: new_node element to insert in the new_node list
*
* Return: pointer to the new_node node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp_element;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
temp_element = *head;
while (temp_element->next)
temp_element = temp_element->next;
temp_element->next = new_node;
}
return (new_node);
}
