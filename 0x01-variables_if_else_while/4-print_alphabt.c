#include <stdio.h>

/**
* main - prints alphabet except "q" "e"
*
* Return: 0 is good
*/

int main(void)
{
	char ch = 'a';

		while  (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch++;
		}
	putchar('\n');
	return (0);
}
