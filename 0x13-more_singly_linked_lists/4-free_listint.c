#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
