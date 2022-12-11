#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -> Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a, q;

	for (a = 0; q <= 98; a++)
	{
		for (q = a + 1; q <= 99; q++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (a == 98 && q == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
