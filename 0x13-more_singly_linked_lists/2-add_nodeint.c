#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: element to add to new node
 *
 * Return: pointer to or address of the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode_ptr;

	newnode_ptr = malloc(sizeof(listint_t));

	if (newnode_ptr == NULL)
	{
		return (NULL);
	}
	else if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode_ptr->n = n;
		newnode_ptr->next = *head;
		*head = newnode_ptr;
	}
	return (newnode_ptr);
}
