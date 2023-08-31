#include "main.h"

/**
* _sqrt - function helps other
* @n: input
* @i: intger to see if number is can be sqrt
* Return: loop for get answer
*/

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - main input
* @n: input
* Return: result of _sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
