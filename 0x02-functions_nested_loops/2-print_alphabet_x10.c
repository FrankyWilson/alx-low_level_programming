#include "main.h"
/**
<<<<<<< HEAD
 * print_alphabet_x10 -> prints alphabet in 10 places
=======
 * print_alphabet_x10 -> prints the lower case
>>>>>>> a5242deccb07314902bd9e07a02b568b4be5c2de
 *
 * Return: Always success.
 *
 */

void print_alphabet_x10(void)
{
	int loop = 0;

	while (loop < 10)
	{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

	loop++;
	}
}
