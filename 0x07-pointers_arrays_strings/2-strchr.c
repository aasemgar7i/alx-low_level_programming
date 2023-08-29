#include "main.h"

/**
* _strchar - founction to locate
* @s: output
* @c: locate character
* Reutrn: s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
