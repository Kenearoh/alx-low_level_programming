#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_print;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes_print++;
		h = h->next;
	}
	return (nodes_print);
}
