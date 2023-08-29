#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of listint_t linked list
 * @head: Pointer to the start of the list
 * @index: Index of node to retrieve (starting from 0)
 *
 * Return: Pointer to nth node, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (count < index && current)
	{
		current = current->next;
		count++;
	}

	if (count == index && current)
		return (current);

	return (NULL);
}
