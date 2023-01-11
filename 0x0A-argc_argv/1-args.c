#include <stdio.h>

/**
 * main - a program that prints the number of argument passed into it
 * @argc: the number of command line int the argument
 * @argv: contain the command line argument
 * Return: Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
