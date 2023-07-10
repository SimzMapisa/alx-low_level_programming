#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @s: string
 *
 * Description: "returns a pointer to a newly allocated space in memory0"
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *pStr;
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	
	pStr = malloc(sizeof(char) * (len + 1));

	if (pStr == NULL || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		pStr[i] = str[i];
	}
	return pStr;
	free(pStr);
}
