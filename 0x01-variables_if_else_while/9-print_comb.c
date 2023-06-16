#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints all possible combinations of single-digit nums'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
