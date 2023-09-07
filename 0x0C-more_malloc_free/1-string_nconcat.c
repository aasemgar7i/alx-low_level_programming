#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - main funcation for constrate two string
* @s1: input
* @s2: input
* @n: count of printed s2
* Return: o
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, u = 0, d = 0, e = 0;
	char *o;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (u = 0; s2[u] != '\0'; u++)
		;
	if (n < u)
		o = malloc(sizeof(char) * (i + n + 1));
	else
		o = malloc(sizeof(char) * (i + u + 1));

	if (!o)
		return (NULL);

	while (d < i)
	{
		o[d] = s1[d];
		d++;
	}

	while (n < u && d < (i + n))
	{
		o[d++] = s2[e++];
	}
	while (n >= u && d < (i + u))
	{
		o[d++] = s2[e++];
	}
	o[d] = '\0';
	return (o);
}
