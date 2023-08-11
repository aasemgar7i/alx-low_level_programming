#include <stdio.h>

/**
* main - prints base16
*
* Return: 0 is Good
*/

int main(void)
{
	int q;
	char w;
		for (q = 0; q < 10; q++)
			putchar(q +  '0');
		for (w = 'a'; w <= 'f'; w++)
			putchar(w);
	putchar('\n');
	return (0);
}
