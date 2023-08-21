#include "main.h"

/**
* _strlen - count lenth
* @s: pointer for result
* Return: e as result
*/

int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}
	return (e);
}
