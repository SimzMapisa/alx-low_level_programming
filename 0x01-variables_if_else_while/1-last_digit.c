#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */


/**
 * greaterOrLess - Check if a number satisfies condition
 *
 * @lastDigit: The number to be checked
 *
 * Return: a string based on condition
 */

const char *greaterOrLess(int lastDigit)
{
	if (lastDigit > 5)
	{
		return ("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		return ("and is 0\n");
	}
	else
	{
		return ("and is less than 6 and not 0\n");
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

	printf("Last digit of %d is %d %s", n, lastDigit, greaterOrLess(lastDigit));

	return (0);
}
