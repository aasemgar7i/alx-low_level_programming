#include "main.h"

/**
 * is_prime - Entry point
 * @n: Input
 * @i: checker
 * Return: 1 if prime number 0 otherwise
 */

int is_prime(int n, int i)
{
	if (i <= 1)
		return (0);
	if (i == 0)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - input
 * @n: input
 * Return: 1 if prime number 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
