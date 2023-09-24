#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head pointer pointing node 1
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	if (head == NULL)
	{
		*head = NULL;
	}

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
