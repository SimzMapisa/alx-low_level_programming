#include "main.h"

/**
 * is_prime_number - returns 1 if prime otherwise 0
 * @n: integer
 *
 * DEscription: "returns 1 if prime otherwise 0"
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	for ( ; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
