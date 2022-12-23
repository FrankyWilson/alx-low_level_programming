#include "main.h"
/**
 * reverse_array -> reversing an array
 * @: array a
 * n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
