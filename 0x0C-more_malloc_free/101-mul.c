#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: array length
 * @argv: array of args
 *
 * Description: "multiplies two integers"
 *
 * Return: int res
 */

int main(int argc, char *argv[])
{
	long int num1, num2, mul;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}
