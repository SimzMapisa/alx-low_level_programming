#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free head node
 * @head: first element
 *
 * Description: "frees a list_t list"
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
