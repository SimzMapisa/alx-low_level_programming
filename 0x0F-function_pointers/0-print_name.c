#include <stdlib.h>

/**
 * print_name - prints name in upper/as-is
 * @name: pointer to name
 * @f: pointer to function
 *
 * Description: "prints name in uppercase or as is"
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		exit(1);
	}
	else
	{
		(*f)(name);
	}
}
