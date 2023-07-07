#include <stdio.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arr of args
 *
 * Description: "prints that number of args"
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
