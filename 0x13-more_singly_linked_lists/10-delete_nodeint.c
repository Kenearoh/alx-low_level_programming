#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_ptr, *current_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	temp_ptr = *head;

	for (i = 0; i < index - 1 && temp_ptr->next; i++)
		temp_ptr = temp_ptr->next;

	if (i != index - 1)
		return (-1);

	current_node = temp_ptr->next;
	temp_ptr->next = current_node->next;
	free(current_node);

	return (1);
}
