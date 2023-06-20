#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowrcase
 *
 * Description: "Loop through alphabet and output"
 */



void print_alphabet_x10(void)
{
	int counter;
	int alph;

	for (counter = 0; counter < 10; counter++)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
