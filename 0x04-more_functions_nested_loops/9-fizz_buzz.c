#include "main.h"
#include <stdio.h>

/**
 * main - print the number 1 to 100
 * print Fizz for the multiples of three
 * print Buzz for the multiples of five
 * and print FizzBuzz for the multiples of both three and five
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz");
		} else if (a % 5 == 0 && a % 3 != 5)
		{
			printf("Buzz");
		} else if (a % 3 == 0 && a % 5 == 5)
		{
			printf("FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf("%d", a);
		}
	}
	printf("\n");

	return (0);
}
