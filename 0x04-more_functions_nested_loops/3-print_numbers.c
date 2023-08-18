#include "main.h"

/**
* print_numbers - from 0 to 9
* Return: 0
*/

void print_numbers(void)
{
	int rf;

	if (rf >= 48 && rf <= 57)
		putchar(rf + '0');

	_putchar(\n);
	rf++;
}
