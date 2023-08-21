#include "main.h"
#include <stdio.h>

void print_array(int *a,int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		if (r == 0)
			printf("%d", a[r]);
		else
			printf(", %d", a[r]);
	}
	printf("\n");
}
