#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: the number of argument in a command line
 * @argv: contains the the command line argument
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
