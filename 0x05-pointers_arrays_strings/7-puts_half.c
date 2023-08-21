#include "main.h"

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
	}
	for (sho = hf; str[sho] != '\0'; sho++)
	{
		_putchar(str[sho]);
	}
	_putchar('\n');
}
