#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: Pointer to the first node
 * @index: Index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	listint_t *curr = *head, *prev = NULL;

	unsigned int i;

	for (i = 0; i < index && curr; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (!curr)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}
