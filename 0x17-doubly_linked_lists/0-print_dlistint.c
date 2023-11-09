#include "lists.h"

/**
 * print_dlistint - prints the elements of the list
 * @h: pointer to the head of the list
 *
 * Return: Int Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	while (h)
	{
		if (h->next == NULL)
			break;
		printf("%d\n", h->n);

		node_count += 1;
		h = h->next;
	}
	return (node_count);
}
