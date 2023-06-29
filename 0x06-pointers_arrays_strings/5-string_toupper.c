#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Description: "changes all lowercase letters of a string to uppercase"
 *
 * Return: a string 
 *
 */

char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] >= 97 && str[idx] <= 122)
		{
			str[idx] = str[idx] - 32;
		}
	}

	return (str);
}
