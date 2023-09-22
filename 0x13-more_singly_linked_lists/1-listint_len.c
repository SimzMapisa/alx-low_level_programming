#include "lists.h"

/**
 * listint_len - returns the length of the sll
 * @h: pointer to the first element of the list
 *
 *Return: length of the lists
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
