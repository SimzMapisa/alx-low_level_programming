#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: length of array of commandline args
 * @argv: string array of cmd args
 *
 * Description: "prints all args it recieves"
 *
 * Return: Always 0
 */
int  main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
