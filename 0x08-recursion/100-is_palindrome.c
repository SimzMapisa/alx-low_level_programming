#include "main.h"
#include <string.h>

/**
 * is_palindrome_aux - checks if string is palindrome
 * @s: pointer to the string
 * @start: starting index
 * @end: last index
 *
 * Description: "check is string is palindrome"
 *
 * Return: 1 if true 0 false
 */

int is_palindrome_aux(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_aux(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to string
 *
 * Description: "checks if a string is palindrome"
 *
 * Return: integer 1 if it is and 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_aux(s, 0, len - 1));
}
