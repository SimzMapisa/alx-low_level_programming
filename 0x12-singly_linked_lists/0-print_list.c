#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t print_list(const list_t *h)
{
	size_t list_size = 0;
	while (h)
	{
		if ( h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%u %s\n", h->len, h->str);
		}
		list_size++;
		h= h->next;
	}
	return (list_size);
}
