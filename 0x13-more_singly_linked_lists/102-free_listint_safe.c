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
int i;
listint_t *temp_ptr;

if (!h || !*h)
return (0);

while (*h)
{
i = *h - (*h)->next;
if (i > 0)
{
temp_ptr = (*h)->next;
free(*h);
*h = temp_ptr;
size++;
}
else
{
free(*h);
*h = NULL;
size++;
break;
}
}

*h = NULL;

return (size);
}
