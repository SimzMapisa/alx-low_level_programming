#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints the elements of the list
 * @h: pointer to the list
 *
 * Descrription: "Print the size or length of sll"
 *
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	size_t list_size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		list_size++;
		h = h->next;
	}
	return (list_size);
}
