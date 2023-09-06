#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits string into words
 * @str: "pointer to the string"
 *
 * Description: "splits string into words"
 *
 * Return: array of strings
 */

char **strtow(char *str)
{
	int wordCount = 0;
	int i;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ')
				i++
		}
		if (str[i] == '\0')
			wordCount++;
	}

	words = (char **)malloc(sizeof(char *) * (wordCount + 1));

	if (words == NULL)
		return (NULL)
}
