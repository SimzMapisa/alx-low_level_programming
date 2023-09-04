#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: Destination
 * @s2: Source
 *
 * Description: "Concatenates two strings"
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s1Len = 0, s2Len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1Len] != '\0')
		s1Len++;
	while (s2[s2Len] != '\0')
		s2Len++;

	ptr = (char *) malloc(sizeof(char) * (s1Len + s2Len + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < s2Len; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
