#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicate function
* @str: input
* Return: pointer mirror
*/

char *_strdup(char *str)
{
	unsigned int i, o;
	char *mirror;

	i = 0;
	o = 0;

	if (str == NULL)
		return (NULL);

	while (str[o])
		o++;

	mirror = malloc(sizeof(char) * (o + 1));

	if (mirror == NULL)
		return (NULL);

	while ((mirror[i] = str[i]) != '\0')
		i++;

	return (mirror);
}
