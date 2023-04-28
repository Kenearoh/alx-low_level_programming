#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *list_ptr;

	while (head != NULL)
	{
		list_ptr = head;
		head = head->next;
		free(list_ptr->str);
		free(list_ptr);
	}
}
