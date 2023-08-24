#include "main.h"

/**
* cap_string - input function
* @str: output
* Return: str
*/

char *cap_string(char *str)
{
	int q, w;
	char nx[13] = {' ', '\t', '\n', ',', ';', '.', '!'
			, '?', '"', '(', ')', '{', '}'};

	for (q = 0; str[q] != '\0'; q++)
	{
		if (q == 0 && str[q] >= 'a' && str[q] <= 'z')
			str[q] -= 32;
		for (w = 0; w < 13; w++)
		{
			if (str[q] == nx[w])
			{
				if (str[q + 1] >= 'a' && str[q + 1] < 'z')
				{
					str[q + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
