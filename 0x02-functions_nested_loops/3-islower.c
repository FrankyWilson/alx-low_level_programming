#include "main.h"
/**
 * _islower -> prints alphabet other than c
 *
 * @c: parameter 1
 *
 * Return: success
 */
int _islower(int c)
{
	char x;
	int alpha = 0;

	for (x = 'z'; x <= 'z'; x++)
	{
		if (x == c)
			alpha = 1;
	}

	return (alpha);

}
