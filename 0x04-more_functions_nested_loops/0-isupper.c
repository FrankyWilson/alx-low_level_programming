#include "main.h"
/**
 * _isupper -> prints the upper alphabets
 * @c: is a parameter
 *
 * Return: Always success
 */
int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
		_putchar(upper);
	_putchar('\n');

	return (0);
}
