#include "main.h"

int sqrt_recursion_aux(int n, int a);

/**
 * _sqrt_recursion - finds the square root of a num
 * @n: number
 *
 * Description: "Calculates the square root of a number"
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion_aux(n, 0));
}

/**
 * sqrt_recursion_aux - finds the natural root of a number
 *
 * @n: number
 * @a: iterator
 *
 * Description: "finds the natural root of a number"
 *
 * Return: the  sqrt
 */

int sqrt_recursion_aux(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (sqrt_recursion_aux(n, a + 1));
}
