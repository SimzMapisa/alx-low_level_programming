#include "lists.h"

/**
 * dlistint_len - returns the length of the list
 * @h: pointer to the first element of the list
 *
 * Return: int Length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);
	if (h->next == NULL)
		return (1);
	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
