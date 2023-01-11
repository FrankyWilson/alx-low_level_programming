#include "main.h"

/**
* str_concat -> A function that concatenates two strings
* @s1: An input pointer of the first string
* @s2: An input pointer of the second string
* Return: A pointer to concatened strings or NULL if it str is NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *new_str, *starts1, *starts2;
	int i = 0, lens1 = 0, lens2 = 0;

	starts1 = s1;
	starts2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens2++;
		s2++;
	}
	s2 = starts2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	starts1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
	}
	new_str[i] = '\0';
	return (starts1);
}
