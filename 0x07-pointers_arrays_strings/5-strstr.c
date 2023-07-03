#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Description: " a function that locates a substring."
 *
 * Return: a sunstring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
