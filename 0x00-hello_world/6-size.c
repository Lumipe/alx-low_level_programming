#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of float: %i byte(s)\n", sizeof(float));
	printf("size of long int: %i byte(s)\n", sizeof(long int));
	printf("size of long long int: %i byte(s)\n", sizeof(long long int));
}
