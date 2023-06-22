#include "main.h"

/**
 * _isupper - chacks if character is uppercase
 * @c: character variable
 *
 * Description: "the function checks if the character value is upper"
 *
 * Return: retrun 1 if upper or 0 if not
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
