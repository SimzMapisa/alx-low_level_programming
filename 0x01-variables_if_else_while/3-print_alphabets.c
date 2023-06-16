#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints is negative or is positive based on variable'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	int cap;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (cap = 65; cap <= 90; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
