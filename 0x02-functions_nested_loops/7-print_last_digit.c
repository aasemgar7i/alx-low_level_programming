#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @y: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int y)
{
	int z;

	if (y < 0)
		y = -y;

	z = y % 10;

	if (z < 0)
		z = -z;

	_putchar(z + '0');

	return (z);
}
