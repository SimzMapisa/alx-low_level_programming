#include <stdio.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arr of args
 *
 * Description: "prints all  passed args"
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
