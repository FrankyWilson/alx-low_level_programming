#include "main.h"
/**
 * rev_string -> prints a string in reverse.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	char tmp;
	int i, x1, x2;

	x1 = 0;
	x2 = 0;

	while (s[x1] != '\0')
		x1++;

	x2 = x1 - 1;
	for (i = 0; i < x1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[x2];
		s[x2] = tmp;
		x2 -= 1;
	}
}
