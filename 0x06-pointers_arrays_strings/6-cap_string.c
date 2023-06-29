#include "main.h"

/**
 * cap_string - capitalizes every word
 *
 * @sent: input sentence
 *
 * Description: "a function that capitalizes all words of a string."
 *
 * Return: string
 *
 */

char *cap_string(char *sent)
{
	int i = 0;
	int j;
	int special[13] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; sent[i] != '\0'; i++)
	{
		if (sent[i] >= 97 && sent[i] <= 122)
		{
			if (i == 0)
			{
				sent[i] = sent[i] - 32;
			}
			else
			{
				for (j = 0; j  < 13; j++)
				{
					if (special[j] == sent[i - 1])
					{
						sent[i] = sent[i] - 32;
					}
				}
			}
		}
	}
	return (sent);
}
