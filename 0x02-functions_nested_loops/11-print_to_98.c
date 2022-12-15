#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * @n: number to be printed
 */
void print_to_98(int n)
{
	int l, m;

	if (n <= 98)
	{
		for (l = n; l <= 98; l++)
		{
			if (l != 98)
				printf("%d, ", l);
			else if (l == 98)
				printf("%d\n", l);
		}
	}
	else if (n >= 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
}
