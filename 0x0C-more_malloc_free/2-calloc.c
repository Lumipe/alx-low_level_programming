#include <stdlib.h>

/**
 * _memset - fills the memory with a constant byte
 * @s: input pointer that represent memory to fill
 * @b: the characters to be fill
 * @n: number of bytes to be filled
 * Return: a pointer to the allocated memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: size of array
 * Return: a pointer with the new allocated memory
 * NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}
