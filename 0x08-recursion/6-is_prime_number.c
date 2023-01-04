#include "main.h"

/**
 * is_prime - to detect a prime number
 * @n: number
 * @b: iterator
 * Return: 1 if number is prime, otherwise 0
 */
int is_prime(unsigned int n, unsigned int b)
{
	if (n % b == 0)
	{
		if (n == 0)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, b + 1));
}

/**
 * is_prime_number - detects if an input is a prime number
 * @n: number
 * Return: 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
