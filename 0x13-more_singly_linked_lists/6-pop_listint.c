#include "lists.h"

/**
 * pop_listint - remove a node from the head of the ll
 * @head: pointer to the head pointer
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	listint_t *current_head = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = temp;
	return (current_head->n);
}
