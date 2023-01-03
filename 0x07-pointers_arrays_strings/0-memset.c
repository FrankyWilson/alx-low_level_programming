#include "main.h"
#include <string.h>

/**
 * _memset -> memory
 * @s: string
 * @b: char
 * @n: an integer
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
