#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: length of array of commandline args
 * @argv: string array of cmd args
 *
 * Description: "prints the number of args passed"
 *
 * Return: Nothing
 */
int  main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
