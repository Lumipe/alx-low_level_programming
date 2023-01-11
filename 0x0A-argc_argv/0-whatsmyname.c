#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: counts the number of arguments in the command line
 * @argv: the number of command line in the argument
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
