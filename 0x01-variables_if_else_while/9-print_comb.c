#include <stdio.h>

/**
* main - prints digit in spcife order
*
* Return: 0 is Good
*/

int main(void)
{
	int o;
		for (o = 0; o < 10; o++)
		{
			putchar(o + '0');
			if (o != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
