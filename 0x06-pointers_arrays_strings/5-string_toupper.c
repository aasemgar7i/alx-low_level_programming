#include "main.h"

/**
* string_toupper - function to change string from lower
* to upper
* @str: input
* Return: str
*/

char *string_toupper(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
	{
		if (str[q] >= 'a' && str[q] <= 'z')
			str[q] = str[q] - 32;
	}
	return (str);
}
