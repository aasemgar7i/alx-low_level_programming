#include <stdio.h>

/**
* main - main function prints alphabet in lower and upper case
*
* Return: 0 id Good
*/

int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		for (ch = 'A'; ch <= 'Z'; ch++)
			putchar(ch);
		putchar('\n');
		return (0);
}
