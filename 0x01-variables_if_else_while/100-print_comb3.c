#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print all possible different combinations of two digits.'
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
