#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char a[10] = "My School";

    printf("%s\n", a);
    rev_string(a);
    printf("%s\n", a);
    return (0);
}
