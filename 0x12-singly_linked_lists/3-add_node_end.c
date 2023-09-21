#include "lists.h"

/**
 * add_node_end - adds a node to end of the list
 * @head: pointer to the head pointer
 * @str: pointer to the input string
 *
 * Return: address of the newly added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	const char *current_char;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	current_char = new_node->str;

	while (*current_char != '\0')
	{
		len++;
		current_char++;
	}

	new_node->len = len;

	while (*head != NULL)
	{
		head = &(*head)->next;
	}

	*head = new_node;

	return (new_node);
}
