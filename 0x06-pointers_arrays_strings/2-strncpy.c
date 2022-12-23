#include "main.h"
#include <string.h>
/**
 * _strncpy -> for copying purpose
 * @dest: parameter
 * @src: also a parameter
 * @n: param3 now
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
