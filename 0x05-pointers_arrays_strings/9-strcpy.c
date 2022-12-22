#include "main.h"

/**
 * _strcpy -> copies strings.
 * @dest: parameter
 * @src: parameter
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[i] != '\0'; x++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
