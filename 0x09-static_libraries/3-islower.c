#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a character is lower
 * @c: character
 *
 * Description: "checks if a character is lower"
 *
 * Return: 0 (true)
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
