#include "main.h"

/**
* _strcmp - output fanction to compare
* @s1: fisrt input string
* @s2: second input string
* Return: sum
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
