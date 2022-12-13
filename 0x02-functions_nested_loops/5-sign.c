#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number of signs to print
 * Return: 1 if the number is greater than 0
 * 0 if number is is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
