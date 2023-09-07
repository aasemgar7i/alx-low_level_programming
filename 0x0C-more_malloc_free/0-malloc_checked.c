#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - memory allocation for intger b
* @b: number of bytes
* Return: pointer o
*/

void *malloc_checked(unsigned int b)
{
	void *o;

	o = malloc(b);
	if (o == NULL)
		exit(98);

	return (o);
}
