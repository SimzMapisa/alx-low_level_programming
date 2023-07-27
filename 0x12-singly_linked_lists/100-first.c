#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - func that runs before main
 *
 * Description: "func that runs before main"
 *
 * Return: nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
