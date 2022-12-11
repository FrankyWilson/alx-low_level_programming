#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -> Entry point
 *
 * Return: Awlawys 0 (success)
 *
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
