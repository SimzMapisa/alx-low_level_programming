#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Description: "loctes a substring"
 *
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
