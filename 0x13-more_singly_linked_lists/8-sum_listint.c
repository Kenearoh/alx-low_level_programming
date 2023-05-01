#include "lists.h"
/**
* sum_listint - calculates the sum of all the data in a listint_t list
* @head: first node in the linked list
*
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
if (!head)
return (0);

/*sum of the current node's data plus sum of the rest of nodes in list*/
return (head->n + sum_listint(head->next));
}
