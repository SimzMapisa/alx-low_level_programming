#include "main.h"

/**
 * is_prime_number - returns 1 if prime otherwise 0
 * @n: integer
 *
 * DEscription: "returns 1 if prime otherwise 0"
 *
 * Return: integer
 */

/**
 * @i: index
 */
int is_prime_rec_intermediate(int n, int i);

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (is_prime_rec_intermediate(n, 2));
}

/**
 * is_prime_rec_intermediate - check if num is prime
 * @n: integer
 * @i: index
 *
 * Description: "checks if number is prime"
 *
 * Return: integer
 */


int is_prime_rec_intermediate(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime_rec_intermediate(n, i + 1));
}
