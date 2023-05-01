#include "lists.h"
/**
* free_listint2 - frees a linked list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *temp_ptr;

if (head == NULL)
return;

while (*head)
{
temp_ptr = (*head)->next;
free(*head);
*head = temp_ptr;
}

*head = NULL;
}
