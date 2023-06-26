#include "main.h"

/**
 * _strlen - function that returns len of a string
 * @s: pointer to the string
 *
 * Description: "a function that returns the length of a string."
 *
 * Return: interger val (str length)
 *
 */

int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
