#include "main.h"
#include <string.h>
/**
 * _strncat -> appends some char.
 * @dest: first parameter
 * @src: second paramter
 * @n: 3rd parameter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
