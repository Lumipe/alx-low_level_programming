/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	/*find string length without null char*/
	for (a = 0; s[a] != '\0'; ++a)
		;
	/*swap the string by looping to half the string*/
	for (b = 0; b < a / 2; ++b)
	{
		c = s[b];
		s[b] = s[a - 1 - b]; /*-1 because the array starts from 0*/
		s[a - 1 - b] = c;
	}
}
