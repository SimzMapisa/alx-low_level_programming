#include "lists.h"

/**
 * add_node - adds a node to the list
 * @head: pointer to the head pointer
 * @str: pointer data
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	const char *current_char;

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
	new_node->next = *head;
	*head = new_node;
	
	return (new_node);
}
