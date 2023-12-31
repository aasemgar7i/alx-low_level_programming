#include "function_pointers.h"
#include <stdlib.h>

/**
*array_iterator - executes a function on each element of an array.
* @array: array
* @size: size of array
* @action: pointer to fuction
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
