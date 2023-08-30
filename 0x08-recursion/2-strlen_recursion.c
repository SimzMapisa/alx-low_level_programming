#include <stdio.h>

/**
 * _strlen_recursion - calculates length of a string
 * @s: "pointer to string"
 *
 * Description: "return length of a string"
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);

	return (len);
}
