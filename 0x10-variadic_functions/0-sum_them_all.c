#include "variadic_functions.h"

/**
 * sum_them_all - sums all the args
 * @n: length of the list
 *
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mydigits;
	unsigned int result = 0, i;

	va_start(mydigits, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(mydigits, int);
	}
	va_end(mydigits);
	return (result);
}
