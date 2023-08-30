#include "main.h"

/**
 * wildcmp - returns 1 if the strings can be considered identical
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Description: "returns 1 if the strings can be considered identical"
 *
 * Return: 1 sucess 0 failure
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
