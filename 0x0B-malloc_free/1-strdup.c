#include "main.h"

/**
* _strdup -> A function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter
* @str: An inpute pointer of the string to copy.
* Return: A pointer to a new string or NULL if it the str is NULL
*/
char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
