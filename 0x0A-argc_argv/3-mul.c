#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * @argc: arg count
 * @argv: arr of args
 *
 * Description: "multiplies two numbers."
 *
 * Return: Always 0 (sucess)  and 1 error
 *
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc - 1 == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
