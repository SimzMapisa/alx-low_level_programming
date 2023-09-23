#include "lists.h"

/**
 * print_listint - print the items in a ll and return num of nodes
 * @h: point to the head
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
