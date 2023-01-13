#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the number of bytes after the conclusion of the  process
 * Return: newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int (11, 12, a, b);
	char *str;

	/*NULL should be treated as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	11 = 12 = 0;
	/*the length of s1 & s2 respectively*/
	while (s1[11] != '\0')
		11++;
	while (s2[12] != '\0')
		12++;

	/*set n as length of s2*/
	if (n >= 12)
		n = 12;

	str = (char *) malloc((11 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	/*add s2 to str*/
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);
}
