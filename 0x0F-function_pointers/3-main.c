#include "3-calc.h"

/**
 * main - entry point
 * @argv: array of command line arguments
 * @argc: length of the array
 *
 * Description: "entry point"
 *
 * Return: always 0 Success
 */

int main(int argc, char *argv[])
{
	int res = 0, a1, a2;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (strcmp(argv[2], "/") == 0 && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (strcmp(argv[2], "%") == 0 && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	res = ptr(a1, a2);
	printf("%d\n", res);
	return (0);
}
