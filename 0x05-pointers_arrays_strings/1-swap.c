#include "main.h"

/**
* swap_int - doing swaping between two values
* @a: first value
* @b: sacond value
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
