#include <stdio.h>

/**
* main - print single digit with putchar
*
* Return: 0 is Good
*/

int main(void)
{
	int k;
		for (k = 0; k < 10; k++)
		{
			putchar(k + '0');
		}
	putchar('\n');
	return (0);
}
