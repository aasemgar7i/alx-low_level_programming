#include <stdio.h>

/**
* main - prints all possible different combinations of three digits.
*
* Return: 0 is Good
*/

int main(void)
{
	int t, y, u;

	for (t = 0; t < 10; t++)
	{
		for (y = 1; y < 10; y++)
		{
			for (u = 2; u < 10; u++)
			{
				if (u  > y && y > t)
				{
					putchar(t + '0');
					putchar(y + '0');
					putchar(u + '0');
					if (t != 7 || y != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
