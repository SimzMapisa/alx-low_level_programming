#include "main.h"

/**
 * _strcpy - copies a str to another pointer
 * @dest: destination
 * @src: source
 *
 * Description: " a function that copies the string"
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *destination = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (destination);
}
