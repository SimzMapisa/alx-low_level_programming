#include <stdio.h>
#include <stdlib.h>

/**
 * printOpcodes - prints opcodes
 * @numBytes: number of bytes
 *
 * Return: Nothing
 */
void printOpcodes(int numBytes)
{
	int i;
	unsigned char *mainFunc = (unsigned char *)printOpcodes;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", mainFunc[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: len of arr
 * @argv: arr
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	printOpcodes(numBytes);
	return (0);
}
