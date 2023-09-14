#include "3-calc.h"

/**
 * op_add - addition
 * @a: first arg
 * @b: second arg after op
 *
 * Description: "Add to integers"
 *
 * Return: result int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first arg
 * @b: second arg
 *
 * Return: result int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first arg
 * @b: second arg
 *
 * Return: result int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first arg
 * @b: second arg
 *
 * Return: result int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: first arg
 * @b: second arg
 *
 * Return: result int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
