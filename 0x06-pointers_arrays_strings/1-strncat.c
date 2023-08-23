#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int q, w;

	q = 0;
	w = 0;
	while (dest[q] != '\0')
		q++;
	while (src[w] != '\0' && w < n)
	{
		dest[q] = src[w];
		w++;
		q++;
	}
	dest[q] = '\0';
	return (dest);
}
