#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: length of array of commandline args
 * @argv: string array of cmd args
 *
 * Description: "multiplies two numbers"
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
