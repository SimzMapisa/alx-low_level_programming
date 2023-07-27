#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a node to the list
 * @str: pointer to the str
 * @head: pointer to first element
 *
 * Description: "adds a new node at the beginning"
 *
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = len;

	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
