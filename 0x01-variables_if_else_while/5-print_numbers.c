#include <stdio.h>

/**
 * main - printing all single digit numbers of base 10
 * Return: Always 0
 */
int main(void)
{
	dig;
	for (dig = '0'; dig <= '9'; dig++)
		printf("%d", dig);

	printf("\n");

	return (0);
}
