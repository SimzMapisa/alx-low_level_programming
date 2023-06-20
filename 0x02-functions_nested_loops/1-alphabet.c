#include "main.h"

/**
 * print_alphabet - print lwrcase alphabet
 *
 * Description: "Program prints alphabet in lwrcase"
 *
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
