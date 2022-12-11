#include <stdio.h>

/**
 * main - printing all alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
