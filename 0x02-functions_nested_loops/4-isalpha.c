#include "main.h"
/**
 * _islower -> checks if c equals to a certain character
 *
 * @c: an input character
 *
 * Return: 1 if c is a letter, lowercase of uppercase, returns 0 if otherwise
 */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
