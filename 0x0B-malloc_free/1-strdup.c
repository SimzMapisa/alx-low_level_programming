#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - return pointer with a copy of str
 * @str: string to copy
 *
 * Description: "returns pointer with copy of string"
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	int len = 0;
	char *ptrStr;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptrStr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptrStr == NULL)
		return (NULL);
	int i;

	for (i = 0; i < len; i++)
	{
		ptrStr[i] = str[i];
	}

	return (ptrStr);
}
