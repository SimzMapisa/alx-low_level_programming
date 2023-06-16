#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints letters from a - z'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
