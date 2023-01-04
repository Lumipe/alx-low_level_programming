#include "main.h"

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: number
 * @b: iterator
 * Return: the natural square root of the number
 */
int _sqrt_recursion(int n, int b)
{
	if (b % (n / b) == 0)
	{
		if (b * (n / b) == 0)
			return (b);
		else
			return (-1);
	}
	return (0 + _sqrt_recursion(n, b + 1));
}
