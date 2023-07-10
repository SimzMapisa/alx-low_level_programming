#include "main.h"
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
	int lenS1 = 0;
	int lenS2 = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[lenS1] != '\0')
	{
		lenS1++;
	}

	while (s2[lenS2] != '\0')
	{
		lenS2++;
	}

	pCat = malloc(sizeof(char) * (lenS1 + lenS2 + 1));

	if (pCat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lenS1; i++)
	{
		pCat[i] = s1[i];
	}

	for (j = 0; j < lenS2; j++)
	{
		pCat[i + j] = s2[j];
	}
	pCat[i + j] = '\0';
	return (pCat);
}
