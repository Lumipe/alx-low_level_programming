#include "main.h"

/**
 * _puts_recursion - function that prints a string folllowed by a new line
 * @s: the string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
