#include "lists.h"

/**
 * list_len -  returns the number of elements in a linkedlist
 * @h: pointer to the list
 *
 * Description: "returns length of a sll"
 *
 * Return: length an int
 */

size_t list_len(const list_t *h)
{
	size_t llength = 0;

	while (h)
	{
		llength++;
		h = h->next;
	}
	return (llength);
}
