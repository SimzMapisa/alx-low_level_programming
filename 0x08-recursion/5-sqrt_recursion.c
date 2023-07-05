#include "main.h"

/**
 * sqrt_helper_func - calculates sqrt
 * @n: num
 * @i: sqrt
 *
 * Description: recursion
 *
 * Return: func
 *
 */

int sqrt_helper_func(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper_func(n, i + 1));
}

/**
 * _sqrt_recursion - return sqrt
 * @n: nume
 *
 * Description: "a function that returns the natural square root of a number."
 *
 * Return: sqrt
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper_func(n, 0));
}
