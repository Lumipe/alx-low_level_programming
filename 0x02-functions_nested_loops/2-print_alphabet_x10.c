#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10, in lowercase
 */
void print_alphabet_x10(void)
{
	int la;
	char le;

	for (la = 0; la <= 9; la++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);

		_putchar('\n');
	}
}

