#include "main.h"

/**
* _puts - write what have
* @str: pointer
* Return: 0 what string include
*/

void _puts(char *str)
{
	int q;

	q = 0;
	for (q = 0; str[q] != '\0'; q++)
	{
	_putchar(str[q]);
	}
	_putchar('\n');
}
