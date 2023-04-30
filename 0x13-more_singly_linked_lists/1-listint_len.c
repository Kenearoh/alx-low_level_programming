#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_print = 0;

	while (h != NULL)
	{
		nodes_print++;
		h = h->next;
	}
	return (nodes_print);
}
