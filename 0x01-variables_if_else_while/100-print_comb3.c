#include <stdio.h>

/**
 * main - printing all possible different combination of digits
 * Return: Always 0
 */
int main(void)
{
	int la, le;
	/* ASCII code for 0*/
	la = 48;

	while (la < 58)
	{
		le = 48;
		while (le < 58)
		{
			putchar(la);
			putchar(le);
			le++;
			putchar(44);
			putchar(32);
		}
		la++;
	}
	putchar('\n');
	return (0);
}
