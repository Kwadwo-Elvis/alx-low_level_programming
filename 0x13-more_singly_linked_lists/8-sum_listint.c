#include "lists.h"

/**
 * sum_listint - Returns the sum of data (n) of a listint_t linked list.
 * @head: Pointer to the start of the list.
 *
 * Return: Sum of data values, or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
