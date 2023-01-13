#include <stdlib.h>

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: quantity of the byte
 * Return: a pointer to the new allocated memory
 * exit with 98 if the malloc should fail
 */
void *malloc_checked(unsigned int b)
{
	void *new_mem;


	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
