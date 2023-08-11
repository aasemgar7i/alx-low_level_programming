#include <stdio.h>

/**
* main - prints alphabet lowercase in reverse
*
* Return: 0 is Good
*/

int main(void)
{
	char x;
		for (x = 'z'; x >= 'a'; x--)
			putchar(x);

	putchar('\n');
	return (0);
}
