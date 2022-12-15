#include "main.h"
/**
 * _isalpha -> checks checks for alphabetical letters
 *
 * @c: an input character
 *
 * Return: 1 if c is a letter, lowercase of uppercase, returns 0 if otherwise
 */
int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
