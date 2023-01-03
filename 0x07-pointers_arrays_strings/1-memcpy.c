#include "main.h"
#include <string.h>

/**
 * _memcpy -> coppies memory
 * @dest: destinations
 * @src: source
 * @n: bytes to be copied
 * Return: string copies
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
