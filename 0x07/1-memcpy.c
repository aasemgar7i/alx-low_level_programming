#include "main.h"

/**
* _memcpy - copy srting
* @dest: writing area
* @src: reading area
* @n: number of bytes
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
