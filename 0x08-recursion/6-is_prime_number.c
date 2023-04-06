#include "main.h"

/**
 * actual_prime - checks if a number is prime
 * is_prime_number - if an integer is a prime 1 number if not 0
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is a prime number, if not 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
