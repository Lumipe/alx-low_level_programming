#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: min number of elements
 * @max: max number of elements
 * Return: array pointer address
 *         NULL if it fails
*/
int *array_range(int min, int max)
{
	int a, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		array[a] = min;
		min++;
	}
	return (array);
}

