#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 * @s1: destination
 * @s2: Source
 *
 * Description: "concatenates two strings."
 *
 * Return: pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *pCat;
	char *concat;
	int len = 0;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	concat = strcat(s1, s2);

	while (concat[len] != '\0')
	{
		len++;
	}

	pCat = malloc(sizeof(char) * (len + 1));

	if (pCat == NULL)
	{
		return (NULL);
	}

	for (i = 0; concat[i]; i++)
	{
		pCat[i] = concat[i];
	}
	return (pCat);
}
