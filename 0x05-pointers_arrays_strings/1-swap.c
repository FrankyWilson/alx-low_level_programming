#include "main.h"
/**
 * swap_int -> changes or swaps the values of two integers
 * @a: an integer
 * @b: an integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int chg;

	chg = *a;
	*a = *b;
	*b = chg;
}
