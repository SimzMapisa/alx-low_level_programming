#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if its upper
 * @c: char
 *
 * Description: "Checks if char is upper"
 *
 * Return: 0 (success)
 *
 */

int _isupper(int c)
{
	return(c >= 'A' && c <= 'Z');
}
