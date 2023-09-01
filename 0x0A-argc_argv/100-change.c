#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: length of the array of args
 * @argv: array of string args
 */

int main(int argc, char *argv[])
{
	int coins [5] = {25, 10, 5, 2, 1};
	int i;
	int ccount = 0;
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (number >= coins[i])
		{
			ccount++;
			number = number - coins[i];
		}
	}

	printf("%d\n", ccount);
	return (0);
}
