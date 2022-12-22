#include "main.h"
#include <stdio.h>
/**
 * print_array -> element of an array to be printed.
 * @n: Number of element to be printed
 * @a: integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
