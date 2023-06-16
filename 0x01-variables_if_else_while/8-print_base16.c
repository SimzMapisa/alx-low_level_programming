#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints  base 16 characters in lower case'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
