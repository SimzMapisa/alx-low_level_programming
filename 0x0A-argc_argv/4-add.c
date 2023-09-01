#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: length of array of commandline args
 * @argv: string array of cmd args
 *
 * Description: "Adds positive integers"
 *
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int i;
	int arg;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = atoi(argv[i]);
		if (arg <= 0 && argv[1][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
