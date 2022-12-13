#include "main.h"
/**
 * main -> checks the code.
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
