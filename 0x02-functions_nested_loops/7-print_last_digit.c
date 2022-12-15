#include "main.h"
/**
 * print_last_digit -> prints last digits
 *
 * @n: parameter
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -1 * (n % 10);
	else
		n = x % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
