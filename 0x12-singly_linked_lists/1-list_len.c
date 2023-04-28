#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of list_t list
 * Return: number of elements found in linked list
 */
size_t list_len(const list_t *h)
{
	size_t list_count = 0;

	while (h != NULL)
	{
		list_count++;
		h = h->next;
	}
	return (list_count);
}
