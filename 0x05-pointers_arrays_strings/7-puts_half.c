#include "main.h"

/**
* puts_half - print last half of string
* @str: input
* Return: 0
*/

void puts_half(char *str)
{
	int qunt;
	int hf;
	int sho;

	for (qunt = 0; str[qunt] != '\0'; qunt++)
	;
	if (qunt % 2 == 0)
	{
		hf = qunt / 2;
	} else
		hf = (qunt / 2) + 1;
	for (sho = hf; str[sho] != '\0'; sho++)
	{
		_putchar(str[sho]);
	}
	_putchar('\n');
}
