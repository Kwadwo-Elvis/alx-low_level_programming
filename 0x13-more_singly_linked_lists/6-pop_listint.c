#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to the start of the list
 *
 * Return: Value of removed node, or 0 if the list is empty or @head is NULL
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
