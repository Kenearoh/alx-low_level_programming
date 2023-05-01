#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: pointer to first node in the linked list
* @index: index of the node to return
*
* Return: pointer to the nth node, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp_ptr = head;

while (temp_ptr && i < index)
{
temp_ptr = temp_ptr->next;
i++;
}
return (temp_ptr != NULL ? temp_ptr : NULL);
}
