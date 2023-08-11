#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
*
* Return: 0 is Good
*/
int main(void)
{
	int t, y;

	for (t = 0; t <= 8; t++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (y > t)
			{
				putchar(t + '0');
				putchar(y + '0');
				if (t != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
