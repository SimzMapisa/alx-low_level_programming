#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'program prints is negative or is positive based on variable'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is positive\n");
	}

	return (0);
}
