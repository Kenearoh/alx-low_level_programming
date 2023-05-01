#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to head of linked list
*
* Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *current = head;
listint_t *next = head;

if (!head)
return (NULL);

while (current && next && next->next)
{
next = next->next->next;
current = current->next;
if (next == current)
{
current = head;
while (current != next)
{
current = current->next;
next = next->next;
}
return (next);
}
}

return (NULL);
}
