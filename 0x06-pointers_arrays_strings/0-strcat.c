#include "main.h"
/**
 * _strcat -> concatenates two strings.
 * @dest: a string.
 * @src: also a string
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	char test = 0, i;

	while (dest[test])
		test++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[test] = src[i];
		test += 1;
	}
	dest[test] = '\0';
	return (dest);
}
