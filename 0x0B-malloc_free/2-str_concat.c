#include "main.h"
#include <stdlib.h>

/**
* str_concat - puts 2 strings togather
* @s1: first string
* @s2: second string
* Return: pointer c
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, o, a, e, d;
	char *c;

	i = 0;
	o = 0;
	e = 0;
	d = 0;

	while (s1[i])
		i++;
	while (s2[o])
		o++;
	a = i + o;

	c = malloc(sizeof(char) * (a + 1));

	while (e < i)
	{
		c[e] = s1[e];
		e++;
	}
	while (e < a)
	{
		c[e] = s2[d];
		e++;
		d++;
	}
	c[a] = '\0';

	return (c);
}
