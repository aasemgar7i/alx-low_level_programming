#include "main.h"

/**
* rot13 - input function
* @str: output
* Return: str
*/

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		}
	}

	return (str);
}
