#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the first node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
