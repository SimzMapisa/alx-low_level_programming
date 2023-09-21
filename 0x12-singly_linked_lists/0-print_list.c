#include "lists.h"

/**
 * print_list - prints the lists
 * @h: pointer to the first element
 *
 * Return: "number of elements"
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}

	return (count);

}
