#include "lists.h"
/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
*
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp_ptr;
int var_stored;

if (!head || !*head)
return (0);

var_stored = (*head)->n;
temp_ptr = (*head)->next;
free(*head);
*head = temp_ptr;

return (var_stored);
}
