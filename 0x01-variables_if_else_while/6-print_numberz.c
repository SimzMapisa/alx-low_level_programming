#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints numbers from 1 - 9 using putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
