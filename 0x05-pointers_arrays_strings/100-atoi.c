#include "main.h"
/**
 * _atoi -> converts a string to an integer.
 * @s: a parameter
 * Return: Nothing
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int ii = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min = *= -1;
		}

		while s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) +(s[c] - '0');
			c++;
		}

		if (isi == i)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}
