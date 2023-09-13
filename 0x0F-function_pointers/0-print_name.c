#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name
* @name: pointer to string
* @f: pointer to callback function.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
