#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to be printed
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;

	_putchar(l + '0');

	return (l);
}
