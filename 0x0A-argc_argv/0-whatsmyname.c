#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: length of array of commandline args
 * @argv: string array of cmd args
 *
 * Description: "prints its name followed by a new line"
 *
 * Return: Nothing
 */
int  main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
