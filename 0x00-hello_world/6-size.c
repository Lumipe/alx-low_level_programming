#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of long int: %i byte(s)\n", sizeof(long int));
	printf("size of long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
