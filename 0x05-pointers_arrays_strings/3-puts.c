#include "main.h"
/**
 * _puts -> write a function that prints a string, followed by a new line
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str);
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
