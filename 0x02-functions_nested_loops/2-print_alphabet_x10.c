#include "main.h"
/**
 * main -> checks the code.
 *
 * Return: Always success.
 *
 */

int main(void)
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
