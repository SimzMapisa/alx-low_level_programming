#include "main.h"

/**
 * _pow_recursion - return val of x raised to y
 * @x: quotient
 * @y: exponent
 *
 * Description: "returns val of x raised to the pow y"
 *
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
