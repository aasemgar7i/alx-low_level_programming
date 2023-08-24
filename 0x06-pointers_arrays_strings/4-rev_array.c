#include "main.h"

/**
* reverse_array - input function to swap
* @a: array
* @n: number of element
* Return: \0
*/

void reverse_array(int *a, int n)
{
	int q, w;

	n--;

	for (q = 0; q < n; q++, n--)
	{
		w = a[q];
		a[q] = a[n];
		a[n] = w;
	}
}
