#include "main.h"
/**
 * _strcat -> concatenates two strings.
 * @dest: a string.
 * @src: also a string
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	char *test = dest;

	while (*dest)
		dest++;
	while (*src)
		dest++ = *src++;

	*dest = '\0';

	return (test);
}
