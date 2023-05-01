#include "lists.h"
/**
* free_listint_safe - frees a linked list
* @h: pointer to the first node in the linked list
*
* Return: size of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current_node, *next;

if (h == NULL)
return (0);

while (*h && (*h)->next >= *h)
{
current_node = *h;
next = current_node->next;
size++;
free(current_node);
*h = next;
}

if (*h == NULL)
{
size++;
free(*h);
*h = NULL;
}

return (size);
}
