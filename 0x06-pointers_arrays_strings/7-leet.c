#include "main.h"

/**
* leet - input function
* @s: output
* Return: s
*/

char *leet(char *s)
{
	int q, w;

	char *l = "aAeEoOtTlL"
	char *r = "4433007711"

	for (q = 0; s[q] != '\0'; q++)
	{
		for (w = 0; w < 10; w++)
		{
			if (s[q] == l[w])
			{
				s[q] = r[w];
			}
		}
	}
	return (s);
}
