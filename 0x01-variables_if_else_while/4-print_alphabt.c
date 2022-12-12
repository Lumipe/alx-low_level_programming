#include <stdio.h>

/**
 * main - printing all alphabets
 * excepts letter q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
