#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: loop limit
 * return square root from actual_sqrt_recursion
 * actual_sqrt_recursion - recurses to find square root
 * @i: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
