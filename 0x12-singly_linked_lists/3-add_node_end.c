#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end
 * @str: pointer to data
 * @head: head of list
 *
 * Description: "adds new node at the end of the list"
 *
 * Return: newn node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
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
	newNode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	return (newNode);
}
