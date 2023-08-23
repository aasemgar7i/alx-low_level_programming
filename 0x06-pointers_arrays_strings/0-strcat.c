#include "main.h"

/**
* _strcat - string input
* @dest: result
* @src: input
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int q = 0;

	while (dest[q] != '\0')
		q++;
	while (*src != '\0')
	{
		dest[q] = *src;
		q++;
		src++;
	}
	dest[q] = '\0';
	return (dest);
}
