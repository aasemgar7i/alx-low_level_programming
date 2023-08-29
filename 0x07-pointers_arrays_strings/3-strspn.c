#include "main.h"

/**
* _strspn - set funcution
* @s: see char
* @accept: accept char
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	for (int i = 0 ; s[i] != '\0' ; ++i)
	{
		for (int j = 0 ; s[i] != accept[j] ; ++j)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
