#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */


/**
 * greaterOrLess - Utility function
 *
 * Description: 'Checks the value of lastDigit in condition'
 *
 * Return: Always 0 (Success)
 */

/* lastDigit is a parameter or argument*/
const char *greaterOrLess(int lastDigit)
{
	if (lastDigit > 5)
	{
		return ("and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		return ("and is 0");
	}
	else
	{
		return ("and is less than 6 and not 0");
	}
}

/**
 * main - Entry point
 *
 * Description: 'program prints the last digit of a num'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of, %d, is %d %s", n, lastDigit, greaterOrLess(lastDigit));

	return (0);
}
