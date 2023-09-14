#include "variadic_functions.h"

/**
 * print_numbers - prints that args
 * @separator: seperates the digits
 * @n: number/size of args
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	separator = ",";

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i == n - 1)
			continue;
		printf("%s ", separator);
	}

	printf("\n");
	va_end(numbers);

}
