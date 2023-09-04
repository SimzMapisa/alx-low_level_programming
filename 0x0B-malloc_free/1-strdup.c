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
	int i;

	if (str[len] == '\0')
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptrStr = (char *) malloc(sizeof(char) * len);
	if (ptrStr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptrStr[i] = str[i];
	}

	return (ptrStr);
}
