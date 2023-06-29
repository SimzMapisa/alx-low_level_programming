#include "main.h"

/**
 * leet - encodes a string into 1337
 * @strn: string
 *
 * Description: "encodes a string into 1337."
 *
 * Return: a string 
 *
 */

char *leet(char *strn)
{
	int i = 0;
	int j;
	char chars[] = "aAeEoOtTlL";
	char nums [] = "4433007711";
	
	while (strn[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (strn[i] == chars[j])
			{
				strn[i] = nums[j];
			}
		}
		i++;
	}
	return (strn);
}
